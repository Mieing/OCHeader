@class IESLiveGradientView, NSString;

@interface HTSLiveGradientMediaFragment : IESLiveRoomComponent <HTSLiveCleanScreenActions>

@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveGradientView *gradientViewTop;
@property (retain, nonatomic) IESLiveGradientView *gradientViewBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)changeCleanScreenMode:(long long)a0;
- (void)insertTopAndBottomGriadentLayerOnMediaLayer;
- (void).cxx_destruct;

@end
