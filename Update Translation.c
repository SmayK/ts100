#ifdef LANG_FR

const char* SettingsDescriptions[17] = {
  // These are all the help text for all the settings.
  // No requirements on spacing or length.
  /* Power source (DC or batt)          */ "Source d'alimentation. Règle la tension de coupure <DC=10V S=3.3V par cellules>",
  /* Sleep temperature                  */ "Température en veille <C>",
  /* Sleep timeout                      */ "Délai avant mise en veille <Minutes>",
  /* Shutdown timeout                   */ "Délai avant extinction <Minutes>",
  /* Motion sensitivity level           */ "Sensibilité du capteur de mouvement <0=Inactif 1=Peu sensible 9=Tres sensible>",
  /* Temperature in F and C             */ "Unité de température <C=Celsius F=Fahrenheit>",
  /* Advanced idle display mode enabled */ "Afficher des informations détaillées lors de la veille.",
  /* Display rotation mode              */ "Orientation de l'affichage <A=Automatique G=Gaucher D=Droitier>",
  /* Boost enabled                      */ "Activer le mode \"Boost\" en maintenant le bouton de devant pendant la soudure",
  /* Boost temperature                  */ "Température du mode \"Boost\"",
  /* Automatic start mode               */ "Démarrer automatiquement la soudure a l'allumage <A=Activé, V=Mode Veille, D=Désactivé>",
  /* Cooldown blink                     */ "Faire clignoter la température lors du refroidissement tant que la panne est chaude.",
  /* Temperature calibration enter menu */ "Etalonner la température de la panne.",
  /* Settings reset command             */ "Réinitialiser tous les réglages",
  /* Calibrate input voltage            */ "Etalonner tension d'entrée. Boutons pour ajuster, appui long pour quitter",
  /* Advanced soldering screen enabled  */ "Afficher des informations détaillées pendant la soudure",
  /* Description Scroll Speed           */ "Vitesse de défilement de ce texte en R=Rapide L=Lent",
};

const char* SettingsCalibrationWarning = "Assurez-vous que la panne soit à température ambiante avant de continuer!";
const char* SettingsResetWarning = "Voulez-vous vraiment réinitialiser les paramètres aux valeurs d'usine?";
const char* UVLOWarningString = "DC FAIBLE";            // <=8 chars
const char* UndervoltageString = "Sous-tension";     // <=16 chars
const char* InputVoltageString = "V d'entrée: ";        // <=11 chars, preferably end with a space
const char* WarningTipTempString = "Temp. Panne: ";     // <=12 chars, preferably end with a space
const char* BadTipString = "PANNE HS";                // <=8 chars
const char* SleepingSimpleString = "Zzzz";              // Must be <= 4 chars
const char* SleepingAdvancedString = "En veille...";    // <=16 chars
const char* WarningSimpleString = "HOT!";               // Must be <= 4 chars
const char* WarningAdvancedString = "ATTENTION! CHAUD"; // Must be <= 16 chars
const char* SleepingTipAdvancedString = "PANNE:";      // <=6 chars
const char* IdleTipString = "PANNE:";     // IdleTipString+IdleSetString <= 10
const char* IdleSetString = " Set:";    // preferably start with a space; IdleTipString+IdleSetString <= 10
const char* TipDisconnectedString = "PANNE DEBRANCH"; // <=16 chars
const char* SolderingAdvancedPowerPrompt = "Puissance: ";

const char SettingRightChar = 'D';
const char SettingLeftChar = 'G';
const char SettingAutoChar = 'A';

const char SettingFastChar = 'R';
const char SettingSlowChar = 'L';

const enum ShortNameType SettingsShortNameType = SHORT_NAME_DOUBLE_LINE;
const char* SettingsShortNames[17][2] = {
  /* (<= 11) Power source (DC or batt)          */ {"Source", "d'alim"},
  /* (<=  9) Sleep temperature                  */ {"Temp.", "veille"},
  /* (<=  9) Sleep timeout                      */ {"Délai", "veille"},
  /* (<= 11) Shutdown timeout                   */ {"Délai", "extinction"},
  /* (<= 13) Motion sensitivity level           */ {"Sensibilité", "au mouvement"},
  /* (<= 13) Temperature in F and C             */ {"Unité de", "température"},
  /* (<= 13) Advanced idle display mode enabled */ {"Ecran veille", "détaillé"},
  /* (<= 13) Display rotation mode              */ {"Orientation", "de l'écran"},
  /* (<= 13) Boost enabled                      */ {"Activation du", "mode Boost"},
  /* (<=  9) Boost temperature                  */ {"temp.", "Boost"},
  /* (<= 13) Automatic start mode               */ {"Démarrage", "automatique"},
  /* (<= 13) Cooldown blink                     */ {"Refroidir en", "clignottant"},
  /* (<= 16) Temperature calibration enter menu */ {"Etalonner", "température"},
  /* (<= 16) Settings reset command             */ {"Réinitialisation", "d'usine"},
  /* (<= 16) Calibrate input voltage            */ {"Etalonner", "tension d'entrée"},
  /* (<= 13) Advanced soldering screen enabled  */ {"Ecran soudure", "détaillé"},
  /* (<= 11) Display Help Text Scroll Speed     */ {"Vitesse de","défilement"},
};

const char* SettingsMenuEntries[4] = {
/*Soldering Menu*/"Soudure\nParamètres",
/* Power Saving Menu*/"Mode\nVeille",
/* UI Menu*/"Interface\nUtilisateur",
/* Advanced Menu*/"Options\nAvancées", };
const char* SettingsMenuEntriesDescriptions[4] ={
"Paramètres de soudage",
"Paramètres d'économie d'énergie",
"Paramètres de l'interface utilisateur",
"Options avancées"
};
#endif
