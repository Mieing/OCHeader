@class NSString, BDPUniqueID;

@interface BDPLynxComponentRTC : LynxUI <BDPRTCEngineMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)__lynx_prop_config__580;
+ (id)__lynx_prop_config__811;

- (void)layoutDidFinished;
- (void)sendLynxEventWithName:(id)a0 param:(id)a1;
- (long long)_getRenderViewMode:(id)a0;
- (void)engineCreateWithUniqueID:(id)a0;
- (void)userId:(id)a0 requestReset:(BOOL)a1;
- (void)mode:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
