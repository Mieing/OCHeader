@class NSString;

@interface ALPLanguageModel : NSObject

@property (readonly, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL isRTLLanguage;
@property (readonly, nonatomic) BOOL isThailand;
@property (readonly, nonatomic) BOOL isLigatureLanguage;

+ (id)languageCodeFromLocale:(id)a0;

- (id)initWithLocale:(id)a0 displayName:(id)a1 localizedDisplayName:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
