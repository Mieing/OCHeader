@class UIButton, NSString, UIImageView, UILabel, UIView, RichTextView;
@protocol WCFinderRictTextTipsViewControllerDelegate;

@interface WCFinderRichTextTipsViewController : MMUIViewController <ILinkEventExt, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *tipsLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) id<WCFinderRictTextTipsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showTipsWithTipsTitle:(id)a0 tipsDetail:(id)a1 cancelButtonTitle:(id)a2 confirmButtonTitle:(id)a3 viewController:(id)a4;
- (void)cancel;
- (void)confirm;
- (void)hide;
- (void)realHideWithoutReport;
- (id)roundCornersOnView:(id)a0 onTopLeft:(BOOL)a1 topRight:(BOOL)a2 bottomLeft:(BOOL)a3 bottomRight:(BOOL)a4 radius:(float)a5;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
