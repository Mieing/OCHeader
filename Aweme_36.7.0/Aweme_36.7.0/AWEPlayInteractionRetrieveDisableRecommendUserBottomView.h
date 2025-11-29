@class UILabel, DUXBaseButton, UIView;

@interface AWEPlayInteractionRetrieveDisableRecommendUserBottomView : UIView

@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleLabelAfterClickedConfirm;
@property (retain, nonatomic) DUXBaseButton *confirmButton;
@property (copy, nonatomic) id /* block */ tappedConfirmButtonBlock;

- (void)didTapConfirmButton:(id)a0;
- (void)performSuccessAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
