@class UIButton, IESLiveGiftForbidUnderageConsumeTipViewModel, UIImageView, UIView, IESLiveGradientView, UILabel;

@interface IESLiveGiftForbidUnderageConsumeTipFullWidthView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipTextLabel;
@property (retain, nonatomic) UIButton *closeTipButton;
@property (retain, nonatomic) IESLiveGiftForbidUnderageConsumeTipViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;

- (void)closeButtonIsClicked;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
