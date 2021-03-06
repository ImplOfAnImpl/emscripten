/*
 * Copyright 2017 The Emscripten Authors.  All rights reserved.
 * Emscripten is available under two separate licenses, the MIT license and the
 * University of Illinois/NCSA Open Source License.  Both these licenses can be
 * found in the LICENSE file.
 */

#include <emscripten/key_codes.h>

const char* emscripten_dom_vk_to_string(int dom_vk_code) {
  switch (dom_vk_code) {
    case DOM_VK_CANCEL:
      return "DOM_VK_CANCEL";
    case DOM_VK_HELP:
      return "DOM_VK_HELP";
    case DOM_VK_BACK_SPACE:
      return "DOM_VK_BACK_SPACE";
    case DOM_VK_TAB:
      return "DOM_VK_TAB";
    case DOM_VK_CLEAR:
      return "DOM_VK_CLEAR";
    case DOM_VK_RETURN:
      return "DOM_VK_RETURN";
    case DOM_VK_ENTER:
      return "DOM_VK_ENTER";
    case DOM_VK_SHIFT:
      return "DOM_VK_SHIFT";
    case DOM_VK_CONTROL:
      return "DOM_VK_CONTROL";
    case DOM_VK_ALT:
      return "DOM_VK_ALT";
    case DOM_VK_PAUSE:
      return "DOM_VK_PAUSE";
    case DOM_VK_CAPS_LOCK:
      return "DOM_VK_CAPS_LOCK";
    /* case DOM_VK_KANA:              DOM_VK_KANA == DOM_VK_HANGUL */
    case DOM_VK_HANGUL:
      return "DOM_VK_KANA/DOM_VK_HANGUL";
    case DOM_VK_EISU:
      return "DOM_VK_EISU";
    case DOM_VK_JUNJA:
      return "DOM_VK_JUNJA";
    case DOM_VK_FINAL:
      return "DOM_VK_FINAL";
    /* case DOM_VK_HANJA:             DOM_VK_HANJA == DOM_VK_KANJI */
    case DOM_VK_KANJI:
      return "DOM_VK_HANJA/DOM_VK_KANJI";
    case DOM_VK_ESCAPE:
      return "DOM_VK_ESCAPE";
    case DOM_VK_CONVERT:
      return "DOM_VK_CONVERT";
    case DOM_VK_NONCONVERT:
      return "DOM_VK_NONCONVERT";
    case DOM_VK_ACCEPT:
      return "DOM_VK_ACCEPT";
    case DOM_VK_MODECHANGE:
      return "DOM_VK_MODECHANGE";
    case DOM_VK_SPACE:
      return "DOM_VK_SPACE";
    case DOM_VK_PAGE_UP:
      return "DOM_VK_PAGE_UP";
    case DOM_VK_PAGE_DOWN:
      return "DOM_VK_PAGE_DOWN";
    case DOM_VK_END:
      return "DOM_VK_END";
    case DOM_VK_HOME:
      return "DOM_VK_HOME";
    case DOM_VK_LEFT:
      return "DOM_VK_LEFT";
    case DOM_VK_UP:
      return "DOM_VK_UP";
    case DOM_VK_RIGHT:
      return "DOM_VK_RIGHT";
    case DOM_VK_DOWN:
      return "DOM_VK_DOWN";
    case DOM_VK_SELECT:
      return "DOM_VK_SELECT";
    case DOM_VK_PRINT:
      return "DOM_VK_PRINT";
    case DOM_VK_EXECUTE:
      return "DOM_VK_EXECUTE";
    case DOM_VK_PRINTSCREEN:
      return "DOM_VK_PRINTSCREEN";
    case DOM_VK_INSERT:
      return "DOM_VK_INSERT";
    case DOM_VK_DELETE:
      return "DOM_VK_DELETE";
    case DOM_VK_0:
      return "DOM_VK_0";
    case DOM_VK_1:
      return "DOM_VK_1";
    case DOM_VK_2:
      return "DOM_VK_2";
    case DOM_VK_3:
      return "DOM_VK_3";
    case DOM_VK_4:
      return "DOM_VK_4";
    case DOM_VK_5:
      return "DOM_VK_5";
    case DOM_VK_6:
      return "DOM_VK_6";
    case DOM_VK_7:
      return "DOM_VK_7";
    case DOM_VK_8:
      return "DOM_VK_8";
    case DOM_VK_9:
      return "DOM_VK_9";
    case DOM_VK_COLON:
      return "DOM_VK_COLON";
    case DOM_VK_SEMICOLON:
      return "DOM_VK_SEMICOLON";
    case DOM_VK_LESS_THAN:
      return "DOM_VK_LESS_THAN";
    case DOM_VK_EQUALS:
      return "DOM_VK_EQUALS";
    case DOM_VK_GREATER_THAN:
      return "DOM_VK_GREATER_THAN";
    case DOM_VK_QUESTION_MARK:
      return "DOM_VK_QUESTION_MARK";
    case DOM_VK_AT:
      return "DOM_VK_AT";
    case DOM_VK_A:
      return "DOM_VK_A";
    case DOM_VK_B:
      return "DOM_VK_B";
    case DOM_VK_C:
      return "DOM_VK_C";
    case DOM_VK_D:
      return "DOM_VK_D";
    case DOM_VK_E:
      return "DOM_VK_E";
    case DOM_VK_F:
      return "DOM_VK_F";
    case DOM_VK_G:
      return "DOM_VK_G";
    case DOM_VK_H:
      return "DOM_VK_H";
    case DOM_VK_I:
      return "DOM_VK_I";
    case DOM_VK_J:
      return "DOM_VK_J";
    case DOM_VK_K:
      return "DOM_VK_K";
    case DOM_VK_L:
      return "DOM_VK_L";
    case DOM_VK_M:
      return "DOM_VK_M";
    case DOM_VK_N:
      return "DOM_VK_N";
    case DOM_VK_O:
      return "DOM_VK_O";
    case DOM_VK_P:
      return "DOM_VK_P";
    case DOM_VK_Q:
      return "DOM_VK_Q";
    case DOM_VK_R:
      return "DOM_VK_R";
    case DOM_VK_S:
      return "DOM_VK_S";
    case DOM_VK_T:
      return "DOM_VK_T";
    case DOM_VK_U:
      return "DOM_VK_U";
    case DOM_VK_V:
      return "DOM_VK_V";
    case DOM_VK_W:
      return "DOM_VK_W";
    case DOM_VK_X:
      return "DOM_VK_X";
    case DOM_VK_Y:
      return "DOM_VK_Y";
    case DOM_VK_Z:
      return "DOM_VK_Z";
    case DOM_VK_WIN:
      return "DOM_VK_WIN";
    case DOM_VK_CONTEXT_MENU:
      return "DOM_VK_CONTEXT_MENU";
    case DOM_VK_SLEEP:
      return "DOM_VK_SLEEP";
    case DOM_VK_NUMPAD0:
      return "DOM_VK_NUMPAD0";
    case DOM_VK_NUMPAD1:
      return "DOM_VK_NUMPAD1";
    case DOM_VK_NUMPAD2:
      return "DOM_VK_NUMPAD2";
    case DOM_VK_NUMPAD3:
      return "DOM_VK_NUMPAD3";
    case DOM_VK_NUMPAD4:
      return "DOM_VK_NUMPAD4";
    case DOM_VK_NUMPAD5:
      return "DOM_VK_NUMPAD5";
    case DOM_VK_NUMPAD6:
      return "DOM_VK_NUMPAD6";
    case DOM_VK_NUMPAD7:
      return "DOM_VK_NUMPAD7";
    case DOM_VK_NUMPAD8:
      return "DOM_VK_NUMPAD8";
    case DOM_VK_NUMPAD9:
      return "DOM_VK_NUMPAD9";
    case DOM_VK_MULTIPLY:
      return "DOM_VK_MULTIPLY";
    case DOM_VK_ADD:
      return "DOM_VK_ADD";
    case DOM_VK_SEPARATOR:
      return "DOM_VK_SEPARATOR";
    case DOM_VK_SUBTRACT:
      return "DOM_VK_SUBTRACT";
    case DOM_VK_DECIMAL:
      return "DOM_VK_DECIMAL";
    case DOM_VK_DIVIDE:
      return "DOM_VK_DIVIDE";
    case DOM_VK_F1:
      return "DOM_VK_F1";
    case DOM_VK_F2:
      return "DOM_VK_F2";
    case DOM_VK_F3:
      return "DOM_VK_F3";
    case DOM_VK_F4:
      return "DOM_VK_F4";
    case DOM_VK_F5:
      return "DOM_VK_F5";
    case DOM_VK_F6:
      return "DOM_VK_F6";
    case DOM_VK_F7:
      return "DOM_VK_F7";
    case DOM_VK_F8:
      return "DOM_VK_F8";
    case DOM_VK_F9:
      return "DOM_VK_F9";
    case DOM_VK_F10:
      return "DOM_VK_F10";
    case DOM_VK_F11:
      return "DOM_VK_F11";
    case DOM_VK_F12:
      return "DOM_VK_F12";
    case DOM_VK_F13:
      return "DOM_VK_F13";
    case DOM_VK_F14:
      return "DOM_VK_F14";
    case DOM_VK_F15:
      return "DOM_VK_F15";
    case DOM_VK_F16:
      return "DOM_VK_F16";
    case DOM_VK_F17:
      return "DOM_VK_F17";
    case DOM_VK_F18:
      return "DOM_VK_F18";
    case DOM_VK_F19:
      return "DOM_VK_F19";
    case DOM_VK_F20:
      return "DOM_VK_F20";
    case DOM_VK_F21:
      return "DOM_VK_F21";
    case DOM_VK_F22:
      return "DOM_VK_F22";
    case DOM_VK_F23:
      return "DOM_VK_F23";
    case DOM_VK_F24:
      return "DOM_VK_F24";
    case DOM_VK_NUM_LOCK:
      return "DOM_VK_NUM_LOCK";
    case DOM_VK_SCROLL_LOCK:
      return "DOM_VK_SCROLL_LOCK";
    case DOM_VK_WIN_OEM_FJ_JISHO:
      return "DOM_VK_WIN_OEM_FJ_JISHO";
    case DOM_VK_WIN_OEM_FJ_MASSHOU:
      return "DOM_VK_WIN_OEM_FJ_MASSHOU";
    case DOM_VK_WIN_OEM_FJ_TOUROKU:
      return "DOM_VK_WIN_OEM_FJ_TOUROKU";
    case DOM_VK_WIN_OEM_FJ_LOYA:
      return "DOM_VK_WIN_OEM_FJ_LOYA";
    case DOM_VK_WIN_OEM_FJ_ROYA:
      return "DOM_VK_WIN_OEM_FJ_ROYA";
    case DOM_VK_CIRCUMFLEX:
      return "DOM_VK_CIRCUMFLEX";
    case DOM_VK_EXCLAMATION:
      return "DOM_VK_EXCLAMATION";
    /* case DOM_VK_DOUBLE_QUOTE:      DOM_VK_DOUBLE_QUOTE == DOM_VK_HASH */
    case DOM_VK_HASH:
      return "DOM_VK_DOUBLE_QUOTE/DOM_VK_HASH";
    case DOM_VK_DOLLAR:
      return "DOM_VK_DOLLAR";
    case DOM_VK_PERCENT:
      return "DOM_VK_PERCENT";
    case DOM_VK_AMPERSAND:
      return "DOM_VK_AMPERSAND";
    case DOM_VK_UNDERSCORE:
      return "DOM_VK_UNDERSCORE";
    case DOM_VK_OPEN_PAREN:
      return "DOM_VK_OPEN_PAREN";
    case DOM_VK_CLOSE_PAREN:
      return "DOM_VK_CLOSE_PAREN";
    case DOM_VK_ASTERISK:
      return "DOM_VK_ASTERISK";
    case DOM_VK_PLUS:
      return "DOM_VK_PLUS";
    case DOM_VK_PIPE:
      return "DOM_VK_PIPE";
    case DOM_VK_HYPHEN_MINUS:
      return "DOM_VK_HYPHEN_MINUS";
    case DOM_VK_OPEN_CURLY_BRACKET:
      return "DOM_VK_OPEN_CURLY_BRACKET";
    case DOM_VK_CLOSE_CURLY_BRACKET:
      return "DOM_VK_CLOSE_CURLY_BRACKET";
    case DOM_VK_TILDE:
      return "DOM_VK_TILDE";
    case DOM_VK_VOLUME_MUTE:
      return "DOM_VK_VOLUME_MUTE";
    case DOM_VK_VOLUME_DOWN:
      return "DOM_VK_VOLUME_DOWN";
    case DOM_VK_VOLUME_UP:
      return "DOM_VK_VOLUME_UP";
    case DOM_VK_COMMA:
      return "DOM_VK_COMMA";
    case DOM_VK_PERIOD:
      return "DOM_VK_PERIOD";
    case DOM_VK_SLASH:
      return "DOM_VK_SLASH";
    case DOM_VK_BACK_QUOTE:
      return "DOM_VK_BACK_QUOTE";
    case DOM_VK_OPEN_BRACKET:
      return "DOM_VK_OPEN_BRACKET";
    case DOM_VK_BACK_SLASH:
      return "DOM_VK_BACK_SLASH";
    case DOM_VK_CLOSE_BRACKET:
      return "DOM_VK_CLOSE_BRACKET";
    case DOM_VK_QUOTE:
      return "DOM_VK_QUOTE";
    case DOM_VK_META:
      return "DOM_VK_META";
    case DOM_VK_ALTGR:
      return "DOM_VK_ALTGR";
    case DOM_VK_WIN_ICO_HELP:
      return "DOM_VK_WIN_ICO_HELP";
    case DOM_VK_WIN_ICO_00:
      return "DOM_VK_WIN_ICO_00";
    case DOM_VK_WIN_ICO_CLEAR:
      return "DOM_VK_WIN_ICO_CLEAR";
    case DOM_VK_WIN_OEM_RESET:
      return "DOM_VK_WIN_OEM_RESET";
    case DOM_VK_WIN_OEM_JUMP:
      return "DOM_VK_WIN_OEM_JUMP";
    case DOM_VK_WIN_OEM_PA1:
      return "DOM_VK_WIN_OEM_PA1";
    case DOM_VK_WIN_OEM_PA2:
      return "DOM_VK_WIN_OEM_PA2";
    case DOM_VK_WIN_OEM_PA3:
      return "DOM_VK_WIN_OEM_PA3";
    case DOM_VK_WIN_OEM_WSCTRL:
      return "DOM_VK_WIN_OEM_WSCTRL";
    case DOM_VK_WIN_OEM_CUSEL:
      return "DOM_VK_WIN_OEM_CUSEL";
    case DOM_VK_WIN_OEM_ATTN:
      return "DOM_VK_WIN_OEM_ATTN";
    case DOM_VK_WIN_OEM_FINISH:
      return "DOM_VK_WIN_OEM_FINISH";
    case DOM_VK_WIN_OEM_COPY:
      return "DOM_VK_WIN_OEM_COPY";
    case DOM_VK_WIN_OEM_AUTO:
      return "DOM_VK_WIN_OEM_AUTO";
    case DOM_VK_WIN_OEM_ENLW:
      return "DOM_VK_WIN_OEM_ENLW";
    case DOM_VK_WIN_OEM_BACKTAB:
      return "DOM_VK_WIN_OEM_BACKTAB";
    case DOM_VK_ATTN:
      return "DOM_VK_ATTN";
    case DOM_VK_CRSEL:
      return "DOM_VK_CRSEL";
    case DOM_VK_EXSEL:
      return "DOM_VK_EXSEL";
    case DOM_VK_EREOF:
      return "DOM_VK_EREOF";
    case DOM_VK_PLAY:
      return "DOM_VK_PLAY";
    case DOM_VK_ZOOM:
      return "DOM_VK_ZOOM";
    case DOM_VK_PA1:
      return "DOM_VK_PA1";
    case DOM_VK_WIN_OEM_CLEAR:
      return "DOM_VK_WIN_OEM_CLEAR";
    default:
      return "Unknown DOM_VK code";
  }
}
