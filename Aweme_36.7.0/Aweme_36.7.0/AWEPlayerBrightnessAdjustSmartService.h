@class AWEPlayerBrightnessAdjustStaticStrategy, NSString;

@interface AWEPlayerBrightnessAdjustSmartService : HTSService <AWEPlayerBrightnessAdjustSmartService>

@property (retain, nonatomic) AWEPlayerBrightnessAdjustStaticStrategy *staticStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (void)setupService;
- (id)lastResult;

@end
