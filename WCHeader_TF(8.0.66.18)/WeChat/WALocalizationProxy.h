@class NSString;

@interface WALocalizationProxy : NSObject <IWALocalizationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForKey:(id)a0;
+ (void)updateLanguage:(id)a0 forRefresh:(BOOL)a1 withViewScene:(unsigned int)a2 shouldChangeMainFrame:(BOOL)a3;
+ (void)setTranslateLanguageVCInstance:(id)a0;
+ (id)getTranslateLanguageVCInstance;
+ (void)changeTranslateLanguageWithUserData:(id)a0 viewController:(id)a1;
+ (id)getChangeTranslateUserData;


@end
