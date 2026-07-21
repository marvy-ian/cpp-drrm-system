# Contributing to the DRRM Command & Control System

Thanks for your interest in contributing! This document outlines how to propose changes, report issues, and submit code.

## Code of Conduct

By participating in this project, you agree to abide by our [Code of Conduct](CODE_OF_CONDUCT.md). Please read it before contributing.

## Getting Started

1. **Fork** the repository and clone your fork locally.
2. Open the solution in **Visual Studio** with the **C++/CLI support** and **.NET desktop development** workloads installed.
3. Build and run the project to confirm your environment is set up correctly (see the [README](README.md) for full build instructions).
4. Create a new branch for your change:
   ```
   git checkout -b feature/short-description
   ```

## How to Contribute

### Reporting Bugs

When filing a bug report, please include:

- A clear, descriptive title
- Steps to reproduce the issue
- Expected vs. actual behavior
- Screenshots, if the issue is visual (this is a UI-heavy project)
- Your environment (Windows version, Visual Studio version, .NET Framework version)

### Suggesting Enhancements

Feature requests are welcome. Please describe:

- The problem your suggestion solves
- How it fits into the DRRM workflow (dashboard, incident reporting, resource logistics, etc.)
- Any UI/UX considerations, especially given the dark, command-center theme of the app

### Submitting Code Changes

1. Keep pull requests focused — one feature or fix per PR is easier to review.
2. Follow the existing code style:
   - Match the naming conventions already in use (`lbl`, `txt`, `cmb`, `btn`, `dgv`, `pnl`, `lst` prefixes for controls).
   - Keep designer-generated layout code (`InitializeComponent`) separate from custom logic where possible.
   - Use descriptive names for event handlers (e.g., `btnDeployResource_Click`).
3. Test your changes by building and running the application, and manually verifying:
   - The affected tab(s) render correctly
   - No regressions in other tabs
   - Mock data still seeds correctly on startup
4. Update documentation (README, code comments) if your change affects usage, build steps, or project structure.
5. Commit with clear, descriptive messages:
   ```
   git commit -m "Add validation to incident report form"
   ```
6. Push your branch and open a Pull Request against `main`, describing:
   - What the change does
   - Why it's needed
   - How it was tested

## Pull Request Review

- PRs are reviewed for correctness, code clarity, and consistency with the project's existing style.
- Since this is a Windows Forms UI application, reviewers may ask for screenshots or a short screen recording of the affected UI.
- Be responsive to review feedback — most PRs go through at least one round of revisions.

## Development Notes

- The application currently uses **mock/in-memory data** seeded in `MainForm_Load`. If you're adding real data persistence, please discuss the approach in an issue first, since it affects the overall architecture.
- UI colors and fonts follow a dark, high-contrast "operations center" theme — please keep new UI elements visually consistent.

## Questions?

If anything is unclear, feel free to open an issue with the `question` label, and we'll do our best to help.