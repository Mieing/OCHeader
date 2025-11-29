@class NSString;

@interface EcsCoreEcsTracker_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsTracker_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)start:(id)a0;
- (void)step:(id)a0;
- (void)end:(id)a0 status:(int)a1;
- (BOOL)isMonitoring:(id)a0;
- (void)onAppLaunch;
- (void)onAppEnterForground;

@end
