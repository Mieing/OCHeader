@interface TranslateMsgUtil : MMObject

+ (id)getUserTranslateRootDir;
+ (BOOL)isTranslateMsgOff;
+ (BOOL)couldTranslateMsg:(id)a0;
+ (BOOL)canShowTranslateMenuItem:(id)a0;
+ (BOOL)canShowTranslateMenuItemForText:(id)a0;
+ (id)languageForContent:(id)a0;
+ (BOOL)isSameLanguage:(id)a0;
+ (BOOL)isSameLanguage:(id)a0 filterChar:(BOOL)a1;
+ (BOOL)isSameLanguage:(id)a0 lang:(id)a1;
+ (BOOL)isSameLanguage:(id)a0 filterChar:(BOOL)a1 ignoreHansT:(BOOL)a2 lang:(id)a3;

@end
