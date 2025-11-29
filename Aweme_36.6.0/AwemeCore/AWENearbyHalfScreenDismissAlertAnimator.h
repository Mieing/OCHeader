@class AWENearbyHalfScreenAlertAnimation, AWENearbyHalfScreenDismissAnimator;

@interface AWENearbyHalfScreenDismissAlertAnimator : AWENearbyHalfScreenDismissAnimator

@property (retain, nonatomic) AWENearbyHalfScreenAlertAnimation *animation;
@property (retain, nonatomic) AWENearbyHalfScreenDismissAnimator *endingAnimator;

- (id)initWithAnimation:(id)a0 endingAnimator:(id)a1;
- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
