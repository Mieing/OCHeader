@class NSTimer, UIView;

@interface IESLLGoodsDetailMainInfoSkeletonManager : NSObject

@property (weak, nonatomic) UIView *skeletonView;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasShownSkeletonView;
@property (nonatomic) BOOL hasContentFinishLoad;

- (void)timeoutAction;
- (void)removeSkeleton;
- (void)notifyFirstImageLoaded;
- (void)showSkeletonInViewOnTargetView:(id)a0;
- (void)hideSkeleton;
- (void).cxx_destruct;
- (void)setupTimeoutTimer;

@end
