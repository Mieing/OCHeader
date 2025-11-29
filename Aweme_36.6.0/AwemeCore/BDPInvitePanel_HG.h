@class NSString, UIView;

@interface BDPInvitePanel_HG : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *dimmingView;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPanel:(id)a0;
- (id)createDimmingView;
- (void)layoutBelowContainer:(id)a0;
- (void)layoutOverContainer:(id)a0;
- (void)layoutHWInContainer:(id)a0;
- (void)onDimmingViewTouched:(id)a0;
- (void)showInContainer:(id)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithPanel:(id)a0;

@end
