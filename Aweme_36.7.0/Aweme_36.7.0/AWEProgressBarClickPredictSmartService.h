@class NSString;

@interface AWEProgressBarClickPredictSmartService : AWEBaseSmartServiceImpl <AWEProgressBarClickPredictSmartService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;
+ (BOOL)enabled;

- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (void)setupService;

@end
