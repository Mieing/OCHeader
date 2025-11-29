@class NSString;

@interface TingApiPlayAppCpp : UnitRCObjcBaseProxyClass <TingApiPlayApp>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getOrCreatePlayApp:(int)a0;
+ (id)getPlayApp:(int)a0;
+ (id)playingPlayApp;

- (id)getTask;
- (id)getTingApiReportService;
- (id)getShutdownController;
- (id)getPlayCenterManager;
- (int)getAppId;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onAppTerminate;
- (void)onAppClearData;
- (void)setPlayAppConfig:(id)a0;
- (id)getPlayAppConfig;

@end
