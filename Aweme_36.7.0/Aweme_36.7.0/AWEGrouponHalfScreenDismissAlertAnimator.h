@class AWEGrouponHalfScreenAlertAnimation, AWEGrouponHalfScreenDismissAnimator;

@interface AWEGrouponHalfScreenDismissAlertAnimator : AWEGrouponHalfScreenDismissAnimator

@property (retain, nonatomic) AWEGrouponHalfScreenAlertAnimation *animation;
@property (retain, nonatomic) AWEGrouponHalfScreenDismissAnimator *endingAnimator;

- (id)initWithAnimation:(id)a0 endingAnimator:(id)a1;
- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
