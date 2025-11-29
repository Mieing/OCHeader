@class NSArray, NSDictionary, NSString;

@interface AWEContentLanguageManager : NSObject <AWEUserMessage, AWEIMSettingModelUpdateMessage, AWEContentLanguageManagerProtocol>

@property (retain, nonatomic) NSArray *supportedLanguage;
@property (retain, nonatomic) NSArray *currentLanguage;
@property (retain, nonatomic) NSArray *remainingLanguage;
@property (retain, nonatomic) NSDictionary *supportedLanguageDisplayDictionary;
@property (copy, nonatomic) NSString *currentLanguageString;
@property (nonatomic) BOOL isFetching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveLanguagesForUnloginState:(id)a0;
+ (id)decompositedLanguageCodeForUnloginState;
+ (id)contentLanguageStringForUnloginState;
+ (void)prefetchUnloginContentLanguages;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)calculateRemainingLanguage;
- (void)updateCurrentLanguageString;
- (void)p_AddOrRemoveActionWithLanguageForUnlogin:(id)a0 isAdd:(BOOL)a1;
- (void)p_AddOrRemoveActionWithLanguage:(id)a0 isAdd:(BOOL)a1 complete:(id /* block */)a2;
- (void)addLanguageForUnloginState:(id)a0;
- (void)removeLanguageForUnloginState:(id)a0;
- (void)addLanguage:(id)a0 complete:(id /* block */)a1;
- (void)removeLanguage:(id)a0 complete:(id /* block */)a1;
- (id)displayContentName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
