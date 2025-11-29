@class NSDictionary, NSString;

@interface AWEIMLibraConfigServiceManager : NSObject <AWEUserMessage>

@property (copy) NSDictionary *result;
@property (nonatomic) BOOL hasLoadedDiskResultForThisAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)__loadResultFromDisk;
- (id)__hasExceedMinimumRequestIntervalForSceneOfEnterStrangerBox;
- (void)__fetchB2CEnterStrangerBoxSceneABTestResultWithCompletion:(id /* block */)a0;
- (id)__enterStrangerBoxSceneABTestKeys;
- (void)__writeEntriesToMemory:(id)a0 specifiedKeys:(id)a1;
- (void)__fetchWithParam:(id)a0 completion:(id /* block */)a1;
- (void)fetchB2CEnterStrangerBoxSceneABTestResultWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
