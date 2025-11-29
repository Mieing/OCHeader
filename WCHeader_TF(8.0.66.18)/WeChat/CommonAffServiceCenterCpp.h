@class NSString;

@interface CommonAffServiceCenterCpp : UnitRCObjcBaseProxyClass <CommonAffServiceCenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceCenter:(id)a0;

- (void)callEnterBackground;
- (void)callEnterForeground;
- (void)callMemoryWarning;
- (void)callClearData;
- (void)callTerminate;

@end
