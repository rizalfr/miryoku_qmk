# Miryoku Keymap Guide for Meureum

This guide shows the Miryoku layout mapped to the Jaykeeb Meureum keyboard in KLE (Keyboard Layout Editor) style.

## Meureum Physical Layout

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Row 0:  [K00] [K01] [K02] [K03] [K04]  [BTN1] [BTN2]  [K05] [K06] [K07] [K08] [K09]  │
│  Row 1:  [K10] [K11] [K12] [K13] [K14]              [K15] [K16] [K17] [K18] [K19]  │
│  Row 2:  [K20] [K21] [K22] [K23] [K24]              [K25] [K26] [K27] [K28] [K29]  │
│  Row 3:        [K32] [K33] [K34]                    [K35] [K36] [K37]              │
└─────────────────────────────────────────────────────────────────────────┘
```

**Key Features:**
- Center buttons: Left Click (BTN1) / Right Click (BTN2)
- Trackball: PMW3360 sensor (always active for cursor movement)
- 3 thumb keys per side

---

## Miryoku KLE-Style Layout

Following the format from https://github.com/manna-harbour/miryoku

### Base Layer (Colemak-DH)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Q       W       F       P       B        🖱L    R     J       L       U       Y       '       │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌──── ┌───────┼──────────────┼───────┼───────┤│
│  │A/GUI  │R/ALT  │S/CTL  │T/SFT  │G       │    ││    │ │H      │N/SFT  │E/CTL  │I/ALT  │O/GUI  ││
│  ├───────┼───────┼───────┼───────┼───────┤└────┘└────┘ ├───────┼───────┼───────┼───────┼───────┤│
│  │Z/BTN  │X/ALT  │C      │D      │V      │             │K      │H      │,/CTL  │./ALT  │//BTN  ││
│  └───────┴───────┴───────┴───────┴───────┘             ───────┴───────┴───────┴───────┴───────┘│
│                    Esc     Space   Tab                    Ent     Bspc    Del                     │
│                   (Media) (Nav)  (Mouse)                 (Sym)   (Num)   (Fun)                   │
└─────────────────────────────────────────────────────────────────────────┘
```

### All Layers Combined (KLE Reference Style)

Each key shows: **Base** / *Nav* / [Mouse] / {Media} / <Num> / (Sym) / Fun

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Q       W       F       P       B        🖱L    🖱R     J       L       U       Y       '       │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ───────┼───────┼───────┼───────┼───────┤│
│  │A      │R      │S      │T      │G       │    ││    │ │H      │N      │E      │I      │O      ││
│  │GUI    │ALT    │CTL    │SFT    │        │    ││    │ │       │SFT    │CTL    │ALT    │GUI    ││
│  ├───────┼───────┼───────┼───────┼───────┤└────┘└────┘ ├───────┼───────┼───────┼───────┼───────┤│
│  │Z      │X      │C      │D      │V      │             │K      │H      │,      │.      │/      ││
│  │BTN    │ALT    │       │       │       │             │       │       │CTL    │ALT    │BTN    ││
│  └───────┴───────┴───────┴───────┴───────┘             ───────┴───────┴───────┴───────┴───────┘│
│                    Esc     Space   Tab                    Ent     Bspc    Del                     │
│                   {Media} {Nav}  [Mouse]                 (Sym)   <Num>   Fun                     │
└─────────────────────────────────────────────────────────────────────────┘
```

---

## Layer Details

### Nav Layer (Hold Left Space)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Boot    Tap     Extra   Base    -        Redo   Paste   Copy    Cut     Undo    │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ┌───────┼───────┼──────────────┼───────┤│
│  │GUI    │ALT    │CTL    │SFT    │-       │    ││    │ │CapsLk │←      │↓      │↑      │→      ││
│  ├───────┼───────┼───────┼───────┼───────└────┘└────┘ ├───────┼───────┼───────┼───────┼───────│
│  │-      │ALT    │Num    │Nav    │-       │             │Ins    │Home   │PgDn   │PgUp   │End    ││
│  └───────┴───────┴───────┴───────┴───────             └───────┴───────┴───────┴───────┴───────┘│
│                    -       -       -                    Ent     Bspc    Del                     │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Cursor keys: ← ↓ ↑ → (home position)
- Page/Line: Home/PgDn/PgUp/End
- Clipboard: Undo/Cut/Copy/Paste/Redo
- Layer switching: Double-tap to change default layer

### Mouse Layer (Hold Left Tab)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Boot    Tap     Extra   Base    -        Redo   Paste   Copy    Cut     Undo    │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ┌───────┼───────┼──────────────┼───────┤│
│  │GUI    │ALT    │CTL    │Sft    │-       │    ││    │ │-      │Ms←    │Ms↓    │Ms↑    │Ms→    ││
│  ├───────┼───────┼───────┼───────┼───────┤└────┘└────┘ ├───────┼───────┼───────┼───────┼───────┤│
│  │-      │ALT    │Sym    │Mouse  │-       │             │-      │Wh←    │Wh↓    │Wh↑    │Wh→    ││
│  └───────┴───────┴───────┴───────┴───────┘             └──────────────┴───────┴───────┴───────┘│
│                    -       -       -                    Btn2    Btn1    Btn3                    │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Mouse movement: Ms← Ms↓ Ms↑ Ms→ (home position)
- Scroll wheel: Wh← Wh↓ Wh↑ Wh→
- Mouse buttons: Btn1 (left), Btn2 (right), Btn3 (middle)

### Media Layer (Hold Left Esc)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Boot    Tap     Extra   Base    -        RGB Tog│RGB Mod│RGB Hue│RGB Sat│RGB Val│
│  ├───────┼───────┼───────┼───────        ┌────┐┌────┐ ┌───────┼───────┼───────┼───────┼───────┤│
│  │GUI    │ALT    │CTL    │Sft    │-       │    ││    │ │Prev   │Vol-   │Vol+   │Next   │-      ││
│  ├───────┼───────┼───────┼──────────────┤└────┘────┘ ├───────┼───────┼───────┼──────────────┤│
│  │-      │ALT    │Fun    │Media  │-       │             │OU_AUTO│-      │-      │-      │-      ││
│  └───────┴───────┴───────┴───────┴───────┘             └───────┴───────┴───────┴───────┴───────┘│
│                    -       -       -                    Stop    Play    Mute                    │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Media: Prev/Vol-/Vol+/Next, Play/Pause/Stop/Mute
- RGB: Toggle, Mode, Hue, Saturation, Value (hold Shift to decrease)

### Num Layer (Hold Right Bspc)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  [       7       8       9       ]        Boot   Tap    Extra   Base    -       │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ┌───────┼───────┼───────┼───────┼───────┤│
│  │;      │4      │5      │6      │=       │    ││    │ │Sft    │CTL    │ALT    │GUI    ││
│  ├──────────────┼───────┼───────┼───────┤└────┘└────┘ ├──────────────┼───────┼───────┼───────┤│
│  │`      │1      │2      │3      │\       │             │Num    │Nav    │ALT    │-      ││
│  ───────┴───────┴───────┴───────┴───────┘             └───────┴───────┴───────┴──────────────┘│
│                    .       0       -                    -       -       -                       │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Numpad: 7/8/9, 4/5/6, 1/2/3, 0/.
- Symbols: [ ] ; = ` \

### Sym Layer (Hold Right Del)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  {       &       *       (       }        Boot   Tap    Extra   Base    -       │
│  ├──────────────┼───────┼───────┤        ┌────┐────┐ ┌───────┼───────┼───────┼───────┼───────┤│
│  │:      │$      │%      │^      │+       │    ││    │ │Sft    │CTL    │ALT    │GUI    ││
│  ├───────┼──────────────┼───────┼───────┤└────┘└────┘ ├───────┼───────┼───────┼───────┼───────┤│
│  │~      │!      │@      │#      │|       │             │Sym    │Mouse  │ALT    │-      ││
│  └───────┴───────┴───────┴───────┴───────┘             ───────┴───────┴───────┴───────┴───────┘│
│                    (       )       _                    -       -       -                       │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Symbols: { } & * ( ) : $ % ^ + ~ ! @ # | ( ) _

### Fun Layer (Hold Right Esc)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  F12     F7      F8      F9      PScr     Boot   Tap    Extra   Base    -       │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ┌───────┼───────┼───────┼──────────────┤│
│  │F11    │F4     │F5     │F6     │ScLk    │    ││    │ │Sft    │CTL    │ALT    │GUI    ││
│  ├───────┼───────┼───────┼───────┼───────┤└────┘└────┘ ├───────┼───────┼───────┼───────┼───────┤│
│  │F10    │F1     │F2     │F3     │Pause   │             │Fun    │Media  │ALT    │-      ││
│  └───────┴───────┴───────┴───────┴───────┘             ───────┴───────┴───────┴───────┴───────┘│
│                    App     Space   Tab                  -       -       -                       │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Function keys: F1-F12
- System: PScr, ScLk, Pause
- App key, Space, Tab on thumbs

### Button Layer (Hold bottom pinkie)

```
┌─────────────────────────────────────────────────────────────────────────┐
│  Undo    Cut     Copy    Paste   Redo     Redo   Paste   Copy    Cut     Undo    │
│  ├───────┼───────┼───────┼───────┤        ┌────┐┌────┐ ┌───────┼───────┼───────┼───────┼───────┤│
│  │GUI    │ALT    │CTL    │Sft    │-       │    ││    │ │Sft    │CTL    │ALT    │GUI    ││
│  ├───────┼───────┼───────┼───────┼───────┤└────└────┘ ├──────────────┼───────┼───────┼───────┤│
│  │Undo   │Cut    │Copy   │Paste  │Redo    │             │Redo   │Paste  │Copy   │Cut    │Undo   ││
│  └──────────────┴───────┴───────┴───────┘             └───────┴───────┴───────┴───────┴───────│
│                    Btn3    Btn1    Btn2                 Btn2    Btn1    Btn3                    │
└─────────────────────────────────────────────────────────────────────────┘
```

**Features:**
- Symmetric mouse buttons and clipboard for use with external pointing devices
- Can be used with either hand

---

## Trackball

The Meureum has a built-in PMW3360 trackball that works independently of the keymap layers.

**Default behavior:**
- Move trackball → Move cursor
- Use Nav layer for additional mouse functions

**Trackball controls (via custom keycodes if added):**
- CPI adjustment for sensitivity
- Scroll mode toggle
- Rotation angle adjustment

---

## Build Commands

```bash
# Default build (Colemak-DH, default nav, Mac clipboard)
qmk compile -kb jaykeeb/meureum -km manna-harbour_miryoku

# With QWERTY alphas
qmk compile -kb jaykeeb/meureum -km manna-harbour_miryoku -e MIRYOKU_ALPHAS=QWERTY

# With vi-style navigation
qmk compile -kb jaykeeb/meureum -km manna-harbour_miryoku -e MIRYOKU_NAV=VI

# With Windows clipboard
qmk compile -kb jaykeeb/meureum -km manna-harbour_miryoku -e MIRYOKU_CLIPBOARD=WIN

# Full custom build
qmk compile -kb jaykeeb/meureum -km manna-harbour_miryoku \
  -e MIRYOKU_ALPHAS=QWERTY \
  -e MIRYOKU_NAV=VI \
  -e MIRYOKU_CLIPBOARD=WIN
```

---

## Notes

- **Home Row Mods:** The home row keys (ASDF/JKL;) have modifiers (GUI/ALT/CTL/SFT) on hold
- **Layer Tap:** Thumb keys activate layers on hold, tap for primary function
- **Double Tap:** Double-tap thumb keys to switch default layers
- **Center Buttons:** Always Left Click / Right Click regardless of layer
- **Trackball:** Always active for cursor movement

---

## References

- Miryoku: https://github.com/manna-harbour/miryoku
- Miryoku QMK: https://github.com/manna-harbour/miryoku_qmk
- Meureum Keyboard: https://github.com/Alabahuy
