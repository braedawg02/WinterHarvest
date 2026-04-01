# WinterHarvest

A Winter-themed game project built with Unreal Engine 5.3.

## Project Structure

This Unreal Engine project includes the following components:

### Bird Model

The Bird Model is a C++ Pawn class that represents a bird entity in the game. It includes:

**Features:**
- Flight mechanics with configurable speed
- Customizable bird species
- Flying state management
- Blueprint-callable functions for controlling bird behavior
- Collision-aware movement

**Properties:**
- `FlightSpeed`: Controls how fast the bird flies in units per second (default: 600.0)
- `bCanFly`: Whether the bird is capable of flight (default: true)
- `BirdSpecies`: Name of the bird species (default: "Generic Bird")

**Functions:**
- `StartFlying()`: Makes the bird start flying
- `StopFlying()`: Makes the bird stop flying
- `Chirp()`: Makes the bird chirp (logs to console)
- `IsFlying()`: Returns whether the bird is currently flying

## Setup

1. Clone this repository
2. Open `WinterHarvest.uproject` with Unreal Engine 5.3 or later
3. The project will compile C++ sources on first open
4. The Bird class can be used in Blueprints or spawned in C++

## Usage

To use the Bird Model in your game:

1. In the Unreal Editor, you can create a Blueprint based on the ABird class
2. Customize the bird properties in the Details panel
3. Call the `StartFlying()`, `StopFlying()`, and `Chirp()` functions from Blueprints
4. The bird will automatically move forward when flying

## Building

The project uses Unreal Build Tool (UBT) for compilation:

```bash
# Generate project files
UnrealBuildTool -projectfiles -project="WinterHarvest.uproject" -game -engine

# Build the project
UnrealBuildTool WinterHarvest Win64 Development -Project="WinterHarvest.uproject"
```

## License

MIT License - See LICENSE file for details.
