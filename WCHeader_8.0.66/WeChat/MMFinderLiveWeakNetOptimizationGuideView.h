@class UIImageView, UILabel, UIView, UIButton;

@interface MMFinderLiveWeakNetOptimizationGuideView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)pageSheetDidDismiss;
- (void)onCloseButtonTapped;
- (void)onConfirmButtonTapped;
- (void).cxx_destruct;

@end
