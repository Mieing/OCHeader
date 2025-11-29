@class NSString;

@interface AWEIPhonePiPManager : NSObject <AWEIPhonePiPManagerProtocol>

@property (nonatomic) long long switchState;
@property (nonatomic) long long sceneState;
@property (nonatomic) BOOL externalPiPEnable;
@property (nonatomic) BOOL pinchPiPEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)setIPhonePiPDefaultState;
- (long long)pipSwitchState;
- (long long)pipSceneState;
- (void)updatePiPSwitchState:(long long)a0;
- (BOOL)iPhonePiPEnable;
- (void)updatePictureInPictureEnable;
- (id)init;

@end
