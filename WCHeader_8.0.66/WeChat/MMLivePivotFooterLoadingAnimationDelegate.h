@class NSString, MMLivePivotFooterView;

@interface MMLivePivotFooterLoadingAnimationDelegate : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) MMLivePivotFooterView *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
