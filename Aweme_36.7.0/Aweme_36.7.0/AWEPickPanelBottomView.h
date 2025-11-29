@class UIImageView, DUXButton, UILabel, UIView, AWEPickPanelBottomViewModel;

@interface AWEPickPanelBottomView : UIView

@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIImageView *pickIcon;
@property (retain, nonatomic) UILabel *restDescLabel;
@property (retain, nonatomic) DUXButton *pickButton;
@property (retain, nonatomic) AWEPickPanelBottomViewModel *viewModel;

+ (double)pickIconWH;
+ (double)pickButtonIconWH;

- (void)setupBind;
- (void)updatePickButtonStyle;
- (void)updateRestPickCountLabel;
- (void)showAlertDialog;
- (void)onPickButtonTapped;
- (void)updateStyle;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
