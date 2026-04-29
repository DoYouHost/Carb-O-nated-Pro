#pragma once

enum Language {
  LANG_EN,
  LANG_PL,
  LANG_DE,
  LANG_FR,
  LANG_ES,
  LANG_COUNT
};

Language current_language = LANG_EN;

const char* get_text(const char* en, const char* pl, const char* de, const char* fr, const char* es) {
  switch (current_language) {
    case LANG_EN: return en;
    case LANG_PL: return pl;
    case LANG_DE: return de;
    case LANG_FR: return fr;
    case LANG_ES: return es;
    default:      return en;
  }
}

const char* get_initializing() {
  return get_text("INITIALIZING", "INICJALIZACJA", "INITIALISIERUNG", "INITIALISATION", "INICIALIZANDO");
}

const char* get_label_pm1()        { return get_text("PM1.0",    "PM1.0",    "PM1.0",    "PM1.0",    "PM1.0");    }
const char* get_label_pm25()       { return get_text("PM2.5",    "PM2.5",    "PM2.5",    "PM2.5",    "PM2.5");    }
const char* get_label_pm4()        { return get_text("PM4.0",    "PM4.0",    "PM4.0",    "PM4.0",    "PM4.0");    }
const char* get_label_pm10()       { return get_text("PM10",     "PM10",     "PM10",     "PM10",     "PM10");     }
const char* get_label_temperature(){ return get_text("Temp",     "Temp",     "Temp",     "Temp",     "Temp");     }
const char* get_label_humidity()   { return get_text("Hum",      "Wilg",     "Feucht",   "Hum",      "Hum");      }
const char* get_label_voc()        { return get_text("VOC",      "VOC",      "VOC",      "VOC",      "VOC");      }
const char* get_label_co2()        { return get_text("CO2",      "CO2",      "CO2",      "CO2",      "CO2");      }
const char* get_label_co()         { return get_text("CO",       "CO",       "CO",       "CO",       "CO");       }
const char* get_unit_ugm3()        { return get_text("ug/m3",    "ug/m3",    "ug/m3",    "ug/m3",    "ug/m3");    }
const char* get_unit_ppm()         { return get_text("ppm",      "ppm",      "ppm",      "ppm",      "ppm");      }
