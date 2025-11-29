@class HTSLiveAmazingBackgroundView;

@interface IESLiveLandscapeMaskFragment : IESLiveRoomComponent

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *topMaskView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bottomMaskView;

+ (BOOL)isMixed;

- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)handleOrientationChanged:(long long)a0;
- (id)landscapeTopGradientLayer;
- (id)landscapeBottomGradientLayer;
- (void).cxx_destruct;

@end
