@class AWETaskPagePopupInfo, NSString;

@interface AWETaskPagePopupSmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWETaskPagePopupSmartService>

@property (nonatomic) BOOL needTrack;
@property (nonatomic) float threshold;
@property (retain, nonatomic) AWETaskPagePopupInfo *popupInfo;
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
- (void).cxx_destruct;
- (id)init;
- (void)setupService;

@end
