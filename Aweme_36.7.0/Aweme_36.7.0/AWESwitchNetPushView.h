@class UIButton, UILabel, UIView;
@protocol AWESwitchNetPushViewDelegate;

@interface AWESwitchNetPushView : UIView

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *rightTipLabel;
@property (weak, nonatomic) id<AWESwitchNetPushViewDelegate> delegate;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
