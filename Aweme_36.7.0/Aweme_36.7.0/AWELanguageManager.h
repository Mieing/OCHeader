@interface AWELanguageManager : NSObject

@property (class, readonly, nonatomic) AWELanguageManager *sharedInstance;

@property (nonatomic) unsigned long long languageStyle;
@property (readonly, nonatomic) long long staticVersionNumber;

- (BOOL)isChinese;
- (id)currentLanguageModel;
- (BOOL)isCurrentLanguage:(id)a0;
- (void)initializeLanguageWithStyle:(unsigned long long)a0 autoLocalize:(BOOL)a1 andFlipImageNames:(id)a2 defaultLanguageName:(id)a3;
- (void)initializeLanguageWithStyle:(unsigned long long)a0 autoLocalize:(BOOL)a1 andFlipImageNames:(id)a2;
- (void)initializeLanguageWithStyle:(unsigned long long)a0 andFlipImageNames:(id)a1;
- (void)updateExpectLanguageModel:(id)a0;
- (id)supportedLanguages;
- (id)currentLocale;
- (id)currentLanguage;

@end
