@class NSString;

@interface StreamInputLanguage : NSObject

@property (nonatomic) unsigned int languageType;
@property (retain, nonatomic) NSString *languageName;
@property (retain, nonatomic) NSString *voicetransIcon;
@property (retain, nonatomic) NSString *voicetransIconEnglish;

- (id)initWithLanguageType:(unsigned int)a0 LanguageName:(id)a1;
- (id)initWithLanguageType:(unsigned int)a0 LanguageName:(id)a1 transIcon:(id)a2 transIconEnglish:(id)a3;
- (void).cxx_destruct;

@end
