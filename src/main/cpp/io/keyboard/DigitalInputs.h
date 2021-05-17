#pragma once

namespace io {
namespace keyboard {

enum DigitalInputs
{
    e_DI_Unassigned = 0x00,
    e_DI_Escape = 0x01,
    e_DI_1 = 0x02,
    e_DI_2 = 0x03,
    e_DI_3 = 0x04,
    e_DI_4 = 0x05,
    e_DI_5 = 0x06,
    e_DI_6 = 0x07,
    e_DI_7 = 0x08,
    e_DI_8 = 0x09,
    e_DI_9 = 0x0A,
    e_DI_0 = 0x0B,
    e_DI_Minus = 0x0C,    // - on main keyboard
    e_DI_Equals = 0x0D,
    e_DI_Back = 0x0E,    // backspace
    e_DI_Tab = 0x0F,
    e_DI_Q = 0x10,
    e_DI_W = 0x11,
    e_DI_E = 0x12,
    e_DI_R = 0x13,
    e_DI_T = 0x14,
    e_DI_Y = 0x15,
    e_DI_U = 0x16,
    e_DI_I = 0x17,
    e_DI_O = 0x18,
    e_DI_P = 0x19,
    e_DI_LBracket = 0x1A,
    e_DI_RBracket = 0x1B,
    e_DI_Return = 0x1C,    // Enter on main keyboard
    e_DI_LControl = 0x1D,
    e_DI_A = 0x1E,
    e_DI_S = 0x1F,
    e_DI_D = 0x20,
    e_DI_F = 0x21,
    e_DI_G = 0x22,
    e_DI_H = 0x23,
    e_DI_J = 0x24,
    e_DI_K = 0x25,
    e_DI_L = 0x26,
    e_DI_Semicolon = 0x27,
    e_DI_Apostrophe = 0x28,
    e_DI_Grave = 0x29,    // accent
    e_DI_LShift = 0x2A,
    e_DI_Backslash = 0x2B,
    e_DI_Z = 0x2C,
    e_DI_X = 0x2D,
    e_DI_C = 0x2E,
    e_DI_V = 0x2F,
    e_DI_B = 0x30,
    e_DI_N = 0x31,
    e_DI_M = 0x32,
    e_DI_Comma = 0x33,
    e_DI_Period = 0x34,    // . on main keyboard
    e_DI_Slash = 0x35,    // / on main keyboard
    e_DI_RShift = 0x36,
    e_DI_Multiply = 0x37,    // * on numeric keypad
    e_DI_LMenu = 0x38,    // left Alt
    e_DI_Space = 0x39,
    e_DI_Capital = 0x3A,
    e_DI_F1 = 0x3B,
    e_DI_F2 = 0x3C,
    e_DI_F3 = 0x3D,
    e_DI_F4 = 0x3E,
    e_DI_F5 = 0x3F,
    e_DI_F6 = 0x40,
    e_DI_F7 = 0x41,
    e_DI_F8 = 0x42,
    e_DI_F9 = 0x43,
    e_DI_F10 = 0x44,
    e_DI_Numlock = 0x45,
    e_DI_Scroll = 0x46,    // Scroll Lock
    e_DI_Numpad7 = 0x47,
    e_DI_Numpad8 = 0x48,
    e_DI_Numpad9 = 0x49,
    e_DI_Subtract = 0x4A,    // - on numeric keypad
    e_DI_Numpad4 = 0x4B,
    e_DI_Numpad5 = 0x4C,
    e_DI_Numpad6 = 0x4D,
    e_DI_Add = 0x4E,    // + on numeric keypad
    e_DI_Numpad1 = 0x4F,
    e_DI_Numpad2 = 0x50,
    e_DI_Numpad3 = 0x51,
    e_DI_Numpad0 = 0x52,
    e_DI_Decimal = 0x53,    // . on numeric keypad
    e_DI_Oem102 = 0x56,    // < > | on UK/Germany keyboards
    e_DI_F11 = 0x57,
    e_DI_F12 = 0x58,
    e_DI_F13 = 0x64,    //                     (NEC PC98)
    e_DI_F14 = 0x65,    //                     (NEC PC98)
    e_DI_F15 = 0x66,    //                     (NEC PC98)
    e_DI_Kana = 0x70,    // (Japanese keyboard)
    e_DI_AbntC1 = 0x73,    // / ? on Portugese (Brazilian) keyboards
    e_DI_Convert = 0x79,    // (Japanese keyboard)
    e_DI_NoConvert = 0x7B,    // (Japanese keyboard)
    e_DI_Yen = 0x7D,    // (Japanese keyboard)
    e_DI_AbntC2 = 0x7E,    // Numpad . on Portugese (Brazilian) keyboards
    e_DI_NumpadEquals = 0x8D,    // = on numeric keypad (NEC PC98)
    e_DI_PrevTrack = 0x90,    // Previous Track (e_DI_CIRCUMFLEX on Japanese keyboard)
    e_DI_At = 0x91,    //                     (NEC PC98)
    e_DI_Colon = 0x92,    //                     (NEC PC98)
    e_DI_Underline = 0x93,    //                     (NEC PC98)
    e_DI_Kanji = 0x94,    // (Japanese keyboard)
    e_DI_Stop = 0x95,    //                     (NEC PC98)
    e_DI_Ax = 0x96,    //                     (Japan AX)
    e_DI_Unlabeled = 0x97,    //                        (J3100)
    e_DI_NextTrack = 0x99,    // Next Track
    e_DI_NumpadEnter = 0x9C,    // Enter on numeric keypad
    e_DI_RControl = 0x9D,
    e_DI_Mute = 0xA0,    // Mute
    e_DI_Calculator = 0xA1,    // Calculator
    e_DI_PlayPause = 0xA2,    // Play / Pause
    e_DI_MediaStop = 0xA4,    // Media Stop
    e_DI_VolumeDown = 0xAE,    // Volume -
    e_DI_VolumeUp = 0xB0,    // Volume +
    e_DI_WebHome = 0xB2,    // Web home
    e_DI_NumpadComma = 0xB3,    // , on numeric keypad (NEC PC98)
    e_DI_Divide = 0xB5,    // / on numeric keypad
    e_DI_SysRQ = 0xB7,
    e_DI_RMenu = 0xB8,    // right Alt
    e_DI_Pause = 0xC5,    // Pause
    e_DI_Home = 0xC7,    // Home on arrow keypad
    e_DI_Up = 0xC8,    // UpArrow on arrow keypad
    e_DI_PgUp = 0xC9,    // PgUp on arrow keypad
    e_DI_Left = 0xCB,    // LeftArrow on arrow keypad
    e_DI_Right = 0xCD,    // RightArrow on arrow keypad
    e_DI_End = 0xCF,    // End on arrow keypad
    e_DI_Down = 0xD0,    // DownArrow on arrow keypad
    e_DI_PgDown = 0xD1,    // PgDn on arrow keypad
    e_DI_Insert = 0xD2,    // Insert on arrow keypad
    e_DI_Delete = 0xD3,    // Delete on arrow keypad
    e_DI_LWin = 0xDB,    // Left Windows key
    e_DI_RWin = 0xDC,    // Right Windows key
    e_DI_Apps = 0xDD,    // AppMenu key
    e_DI_Power = 0xDE,    // System Power
    e_DI_Sleep = 0xDF,    // System Sleep
    e_DI_Wake = 0xE3,    // System Wake
    e_DI_WebSearch = 0xE5,    // Web Search
    e_DI_WebFavorites = 0xE6,    // Web Favorites
    e_DI_WebRefresh = 0xE7,    // Web Refresh
    e_DI_WebStop = 0xE8,    // Web Stop
    e_DI_WebForward = 0xE9,    // Web Forward
    e_DI_WebBack = 0xEA,    // Web Back
    e_DI_MyComputer = 0xEB,    // My Computer
    e_DI_Mail = 0xEC,    // Mail
    e_DI_MediaSelect = 0xED,     // Media Select

    e_NumberKeyCodes = 0xEE,

    e_DIModifierShift = 0xF0,
    e_DIModifierCtrl = 0xF1,
    e_DIModifierAlt = 0xF2,

    e_DI_Count = 0xFF,
};

}
}