@class NSString;

@interface AWETaskPageAdPreloadSmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWETaskPageAdPreloadSmartService>

@property (nonatomic) BOOL needTrack;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasShowAd;
@property (nonatomic) BOOL hasClickAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (BOOL)injectTruthForData:(id)a0 withInput:(id)a1 ext:(id)a2;
- (double)getCurrentTimeMs;
- (id)init;
- (void)setupService;

@end
