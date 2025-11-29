@class NSString;
@protocol TTVideoEngineVRReaction;

@interface TTVideoEngineVRFragment : NSObject <TTVideoEngineFragment, TTVideoEngineVRAction>

@property (weak, nonatomic) id<TTVideoEngineVRReaction> reaction;
@property (nonatomic) long long scopicType;
@property (nonatomic) BOOL headTrackingEnable;
@property (nonatomic) float zoom;
@property (nonatomic) BOOL isVRModeEnable;
@property (nonatomic) long long contentType;
@property (nonatomic) long long fovType;
@property (nonatomic) BOOL disableZAxis;
@property (nonatomic) long long projectionType;
@property (nonatomic) float expand;
@property (nonatomic) float zOffset;
@property (nonatomic) float offsetCubicPitch;
@property (nonatomic) float offsetCubicYaw;
@property (nonatomic) float cmpFaceDimension;
@property (nonatomic) float fovAngle;
@property (nonatomic) BOOL enableFirstFrameOptimize;
@property (nonatomic) BOOL spaceOrientationOptDisable;
@property (nonatomic) BOOL scopicMonoOnceDraw;
@property (nonatomic) BOOL touchRotationInWorldCoord;
@property (nonatomic) long long postNotifyVRPoseInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fragmentInstance;

- (long long)getIntValueForKey:(long long)a0;
- (float)getFloatValueForKey:(long long)a0;
- (void)configVRWithUserInfo:(id)a0;
- (void)startRenderVROutlet;
- (void)recenter;
- (void)updateConfigurationWithParams:(id)a0;
- (void)handleHeadPoseDidUpdateNotification:(id)a0;
- (void)rotateWithPitch:(double)a0 andYaw:(double)a1 andRoll:(double)a2;
- (void)setVRModeEnabled:(BOOL)a0;
- (void)videoEngineDidCallPlay:(id)a0;
- (void)videoEngineDidPrepared:(id)a0;
- (void)videoEngineDidReset:(id)a0;
- (void)videoEngineDidInit:(id)a0;
- (void)setVREffectParamter:(id)a0;
- (void)updateVRConfingWithParameter:(id)a0;
- (id)postNotifiVRPoseWithEulerZXYOrder:(struct { })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
