@class NSString, IESLivePEStrategyApi, IESLivePEStrategyStorage;

@interface IESLivePEStrategyManager : NSObject <IESLiveUserActions, IESLivePEStrategyProvider>

@property (retain, nonatomic) IESLivePEStrategyStorage *strategyStorage;
@property (retain, nonatomic) IESLivePEStrategyApi *strategyApi;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL fetchFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userDidLogin:(id)a0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)onFrontierReceivingMessage:(id)a0;
- (id)strategyWithName:(id)a0;
- (void)fetchStrategyWithScene:(long long)a0;
- (BOOL)isValidMessageForSetting:(id)a0;
- (id)allStrategyFromMemory;
- (void)fetchStrategyWithScene:(long long)a0 completion:(id /* block */)a1;
- (void)addStrategys:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
