@class NSString, UIView;
@protocol IESLiveReturnBackCameraRouter;

@interface IESLiveReturnBackCameraFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction>

@property (nonatomic) int returnBackStyle;
@property (retain, nonatomic) id<IESLiveReturnBackCameraRouter> returnCameraRouter;
@property (weak, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)handleOrientationChanged:(long long)a0;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)layoutIndicatorView:(id)a0;
- (void)renderIndicatorView;
- (void).cxx_destruct;

@end
