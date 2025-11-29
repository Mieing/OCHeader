@class NSString, NSMutableArray, AWEIMFlexLayoutAnimator;

@interface AWEIMFlexFadeAnimator : NSObject <AWEIMFlexAnimatorProtocol>

@property (retain, nonatomic) NSMutableArray *tempShowViews;
@property (retain, nonatomic) AWEIMFlexLayoutAnimator *layoutAnimator;
@property (nonatomic) BOOL enableLayoutWithAnimation;
@property (nonatomic) BOOL enqueUITask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAnimatorEnableForPresenter:(id)a0;
- (void)presenter:(id)a0 willBeginAnimationWithView:(id)a1;
- (void)presenter:(id)a0 doingAnimationWithView:(id)a1;
- (void)presenter:(id)a0 didEndAnimationWithView:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
