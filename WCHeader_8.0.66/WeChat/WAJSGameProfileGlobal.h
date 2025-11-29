@class WAJSGameService;

@interface WAJSGameProfileGlobal : NSObject <IWAJSGameProfileGlobal>

@property (weak, nonatomic) WAJSGameService *service;

- (id)initWithService:(id)a0;
- (void)profileStart;
- (id)profileStop;
- (BOOL)isProfileFromStart;
- (void)sendInspectMessage:(id)a0;
- (void)onInspectMessage:(id)a0;
- (void)sendExternalInspectMessage:(id)a0;
- (void)onExternalInspectMessage:(id)a0;
- (id)getSystemNanoTime;
- (id)performanceNow;
- (void).cxx_destruct;

@end
