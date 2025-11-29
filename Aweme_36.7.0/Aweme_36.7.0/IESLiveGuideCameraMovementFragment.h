@class NSString;

@interface IESLiveGuideCameraMovementFragment : IESLiveGuideComponent <IESLiveEffectCameraMovementService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)showCameraMovementPanelView;
- (void)handleBottomPanelDisplay:(BOOL)a0;

@end
