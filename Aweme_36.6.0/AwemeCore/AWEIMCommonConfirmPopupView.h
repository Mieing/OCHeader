@class UILabel, UIButton, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMCommonConfirmPopupView : AWEIMBasePopupView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)__setupUI;
- (void)__handleConfirmButtonClicked:(id)a0;
- (void)__handleCancelButtonClicked:(id)a0;
- (void)showWithTitle:(id)a0 subtitle:(id)a1 cancel:(id)a2 confirm:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
