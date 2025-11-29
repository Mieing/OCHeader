@interface TranslateToolUtils : NSObject

+ (BOOL)IsOpenInputTranslating;
+ (id)getDefaultLanguage;
+ (id)getSupportLanguage;
+ (BOOL)isSupportLanguage:(id)a0;
+ (id)getLanguageDesWithType:(id)a0;
+ (id)getLastUseLanguageType:(id)a0;
+ (void)setLastUseLanguageType:(id)a0 chatName:(id)a1;
+ (BOOL)hadShowPlaceHolder;
+ (void)setShowPlaceHolder;
+ (BOOL)isDispalyingTranslateTool:(id)a0;
+ (void)setTranslateTool:(id)a0 dispalying:(BOOL)a1;
+ (void)notifyEnterNewSession;
+ (void)notifyExposeUseBtn:(id)a0;
+ (void)notifyUserOpenTranslateTool:(id)a0;
+ (void)notifyUserUseTranslate:(id)a0;

@end
