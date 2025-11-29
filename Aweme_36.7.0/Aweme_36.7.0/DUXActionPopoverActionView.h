@class DUXActionPopoverAction, UIColor, UIImageView, DUXPopoverUIConfigModel, UILabel;
@protocol DUXActionPopoverActionViewDelegate;

@interface DUXActionPopoverActionView : UIView

@property (retain, nonatomic) DUXActionPopoverAction *action;
@property (nonatomic) long long layoutDirection;
@property (weak, nonatomic) id<DUXActionPopoverActionViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *actionColor;
@property (retain, nonatomic) UIColor *actionPressColor;
@property (retain, nonatomic) DUXPopoverUIConfigModel *uiConfig;

- (void)tapGestureFuction;
- (double)actionPopoverActionWidth;
- (id)initWithAction:(id)a0 withColor:(id)a1 withPressColor:(id)a2 layoutDirection:(long long)a3;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;

@end
