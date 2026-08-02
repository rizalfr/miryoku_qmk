# Miryoku for Reviung41

This keymap maps Miryoku's 3x5 alpha blocks to the center-facing keys of the Reviung41 and disables the far-left and far-right keys of each alpha row. On the five-key thumb row, the outer pairs retain Miryoku's Escape/Media, Space/Nav, Backspace/Num, and Delete/Fun functions. The large center thumb switch sends Enter when tapped and activates the Mouse layer when held. The standard Tab/Mouse and Enter/Symbol thumb assignments are omitted.

RGB lighting, the console, and the command feature are disabled to keep the firmware within the available ATmega32U4 application space.

Build with:

```sh
qmk compile -kb reviung/reviung41 -km manna-harbour_miryoku
```

The keyboard was designed by [gtips](https://github.com/gtips/reviung).
