@class NSTimer, NSString;

@interface AWECrowdRecognitionSmartService : AWEBaseSmartServiceImpl <IESFCEventObserver, AWECrowdRecognitionSmartService>

@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void)runPredict;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)setupService;

@end
