@class NSString;

@interface IESLiveAnchorCameraMovementFragment : IESLiveRoomComponent <IESLiveEffectCameraMovementService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)loadToolbarItem;
- (void)showCameraMovementPanelView;

@end
