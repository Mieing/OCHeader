@class ACCSkeletonDetectTipsView;

@interface ACCSkeletonDetectTipsManager : NSObject

@property (retain, nonatomic) ACCSkeletonDetectTipsView *tipsView;

+ (id)showNotDetectedTips;
+ (void)startAnimationWithTipsView:(id)a0;

- (void)removeTips;
- (void)showNotDetectedTips;
- (void).cxx_destruct;

@end
