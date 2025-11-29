@class NSMutableDictionary, UIView;
@protocol IESLivePriorityGuide;

@interface IESLiveGuideManager : NSObject <IESPriorityGuideDelegate>

@property (retain, nonatomic) NSMutableDictionary *guideAndActions;
@property (weak, nonatomic) UIView<IESLivePriorityGuide> *displayingGuide;
@property (nonatomic) long long retryCount;

+ (id)bubbleGuideWithPriority:(float)a0 diContext:(id)a1;
+ (id)bubbleGuideWithDIContext:(id)a0;
+ (id)showTip:(id)a0 inView:(id)a1 atTopOf:(id)a2 delay:(double)a3 duration:(double)a4 priority:(float)a5 didShow:(id /* block */)a6 diContext:(id)a7;
+ (id)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 delay:(double)a3 duration:(double)a4 remakeConstraints:(id /* block */)a5 appendContentConstraints:(id /* block */)a6 priority:(float)a7 didShow:(id /* block */)a8 diContext:(id)a9;
+ (id)showTip:(id)a0 inView:(id)a1 atBottomOf:(id)a2 delay:(double)a3 duration:(double)a4 priority:(float)a5 didShow:(id /* block */)a6 diContext:(id)a7;
+ (id)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atTopOf:(id)a4 delay:(double)a5 duration:(double)a6 priority:(float)a7 didShow:(id /* block */)a8 diContext:(id)a9;
+ (id)showTextPieces:(id)a0 backgroundImage:(id)a1 arrowImage:(id)a2 inView:(id)a3 atBottomOf:(id)a4 delay:(double)a5 duration:(double)a6 priority:(float)a7 didShow:(id /* block */)a8 diContext:(id)a9;
+ (id)sharedInstance;

- (id)bubbleGuideWithPriority:(float)a0 diContext:(id)a1;
- (void)clearActionWithView:(id)a0;
- (void)guideView:(id)a0 applayDisPlayInView:(id)a1 completion:(id /* block */)a2;
- (void)resetFire;
- (BOOL)canFire;
- (BOOL)readyToShowNextGuide:(id)a0;
- (void)processInComingView:(id)a0 containerView:(id)a1 delay:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)fire;

@end
