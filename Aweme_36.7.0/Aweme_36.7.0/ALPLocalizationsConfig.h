@class NSString, ALPLanguageModel;

@interface ALPLocalizationsConfig : NSObject <NSCopying>

@property (retain, nonatomic) ALPLanguageModel *developmentLanguage;
@property (retain, nonatomic) NSString *defaultLocale;
@property (retain, nonatomic) NSString *languagePackageInitialPath;
@property (nonatomic) long long languagePackageInitialVersion;
@property (retain, nonatomic) NSString *extensionAppGroupIdentifier;
@property (nonatomic) BOOL autoLocalize;
@property (copy, nonatomic) id /* block */ languageFilterBlock;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
