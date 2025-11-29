@class IESLiveMotionGuideStore;

@interface IESLiveMotionGuideFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveMotionGuideStore *motionGuideCoordinator;

- (void)componentCreate;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void).cxx_destruct;

@end
