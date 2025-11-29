@class AWENearbyHalfScreenTargetAnimation, NSString;

@interface AWENearbyHalfScreenDismissTargetScaleAnimator : AWENearbyHalfScreenDismissAnimator <CAAnimationDelegate>

@property (retain, nonatomic) AWENearbyHalfScreenTargetAnimation *animation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAnimation:(id)a0;

@end
