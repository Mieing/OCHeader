@class UIButton, UIImageView, MMLiveTaskId, UIView, MMUILabel;
@protocol MMLiveFullScreenTipsViewDelegate;

@interface MMLiveFullScreenTipsView : UIView

@property (retain, nonatomic) UIView *blurBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *fullViewTipsTitleLabel;
@property (retain, nonatomic) MMUILabel *fullViewTipsDescLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<MMLiveFullScreenTipsViewDelegate> delegate;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) UIView *parentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1 delegate:(id)a2;
- (void)layoutUI;
- (void)layoutBlurBackgroundView;
- (void)layoutCloseButton;
- (void)showInView:(id)a0 titleWording:(id)a1 descWording:(id)a2;
- (void)setCloseButtonColor:(id)a0 andTitleColor:(id)a1;
- (void)relayout;
- (void)onCloseButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
