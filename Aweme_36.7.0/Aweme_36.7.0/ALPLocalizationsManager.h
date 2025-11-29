@class ALPLanguageModel, NSString, NSArray, NSMutableDictionary, NSDictionary, ALPLanguagePackMapper, ALPLocalizationsConfig, NSPointerArray;

@interface ALPLocalizationsManager : NSObject

@property (retain, nonatomic) NSString *languageSourceRootPath;
@property (retain, nonatomic) NSDictionary *currentTranslationDictionary;
@property (copy, nonatomic) NSDictionary *patchTranslationDictionary;
@property (retain, nonatomic) ALPLanguagePackMapper *currentTranslationMapper;
@property (retain, nonatomic) NSDictionary *currentTranslationStringsDict;
@property (retain, nonatomic) NSDictionary *currentLocalizedImageNames;
@property (retain, nonatomic) NSMutableDictionary *currentLocalizedLottieNames;
@property (retain, nonatomic) NSArray *languagePackageSupportedLanguages;
@property (retain, nonatomic) ALPLocalizationsConfig *config;
@property (retain, nonatomic) NSPointerArray *registeredObjects;
@property (retain, nonatomic) NSMutableDictionary *cachedImages;
@property (retain, nonatomic) NSDictionary *migrationFallbackDict;
@property (retain, nonatomic) NSDictionary *unusedFallbackDict;
@property (retain, nonatomic) NSDictionary *migrationFallbackPluralDict;
@property (nonatomic) BOOL showTranslationKey;
@property (copy, nonatomic) NSString *translationPatchPath;
@property (retain, nonatomic) ALPLanguageModel *currentLanguage;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) BOOL isThailand;
@property (readonly, nonatomic) BOOL isLigatureLanguage;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *groupName;
@property (readonly, nonatomic) BOOL autoLocalize;

+ (void)enableAsyncReloadUI:(BOOL)a0;
+ (void)setCurrentLanguageKey:(id)a0;
+ (id)instanceForGroup:(id)a0;
+ (void)setALPLocalizationsManagerJSONSerializationFunction:(void /* function */ *)a0;
+ (id)sharedInstance;

- (id)translatedStringForString:(id)a0;
- (void)registerObject:(id)a0;
- (void)startWithConfig:(id)a0;
- (void)reloadUI;
- (id)translatedStringForString:(id)a0 pluralValues:(id)a1;
- (void)renewCurrentLanguage;
- (BOOL)setCurrentLanguageKey:(id)a0;
- (void)showTranslationKeyNotification:(id)a0;
- (id)fallbackLanguageModelWithLanguageCode:(id)a0;
- (id)languageModelFromLocale:(id)a0;
- (id)languageCodeFromSystemCode:(id)a0;
- (void)reloadCurrentTranslationDictionary;
- (id)filteredLanguages:(id)a0;
- (id)_translateStringForString:(id)a0 translationBlock:(id /* block */)a1;
- (id)formatedTranslationStringWithKey:(id)a0 translation:(id)a1;
- (id)_translatePluralizedStringForString:(id)a0 pluralValues:(id)a1;
- (id)_pluralizeFistPlaceholderWithFormat:(id)a0 itemDict:(id)a1 pluralValues:(id)a2;
- (id)_firstPlaceholderFromLocalizedFormat:(id)a0;
- (id)_keyFromPlaceHolder:(id)a0;
- (long long)_firstIndexFromLocalizedFormat:(id)a0;
- (id)_pluralTypeFromValue:(float)a0;
- (id)translatedImageForImage:(id)a0;
- (id)translatedAttributedStringForString:(id)a0;
- (void)excuteReloadUI;
- (id)supportedImageNameForCode:(id)a0;
- (id)supportedLottieNameForCode:(id)a0;
- (void)reloadLanguagePackageFromPath:(id)a0;
- (BOOL)isStringTranslatedForCurrentLanguage:(id)a0;
- (id)translatedStringForString:(id)a0 pluralValues:(id)a1 defaultTranslation:(id)a2;
- (id)translatedStringForString:(id)a0 defaultTranslation:(id)a1;
- (id)translatedLottieForLottie:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGroupName:(id)a0;

@end
