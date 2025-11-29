@class NSString, NSMutableDictionary;

@interface AWEIMFlexLayoutAnimator : NSObject <AWEIMFlexAnimatorProtocol>

@property (retain, nonatomic) NSMutableDictionary *lastPresenterFrameMap;
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
- (void)p_setFrameForPresenter:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
