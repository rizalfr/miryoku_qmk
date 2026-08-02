# Miryoku for Reviung41

This keymap maps Miryoku's 3x5+3 layout to the Reviung41. The four outer switches in the dedicated thumb cluster and the two innermost switches of the bottom alpha row provide the six Miryoku thumb keys. The large center thumb switch sends Enter when tapped and activates the Mouse layer when held. The unused outer alpha columns are disabled.

RGB lighting, the console, and the command feature are disabled to keep the firmware within the available ATmega32U4 application space.

Build with:

```sh
qmk compile -kb reviung/reviung41 -km manna-harbour_miryoku
```

The keyboard was designed by [gtips](https://github.com/gtips/reviung).
