@class NSString;

@interface AWEIMFlexDefaultAnimator : NSObject <AWEIMFlexAnimatorProtocol>

@property (nonatomic) BOOL enableLayoutWithAnimation;
@property (nonatomic) BOOL enqueUITask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAnimatorEnableForPresenter:(id)a0;
- (id)initWithContext:(id)a0;

@end
