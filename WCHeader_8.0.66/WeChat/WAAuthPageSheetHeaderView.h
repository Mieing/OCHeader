@class UILabel, UIButton, MMWebImageView;

@interface WAAuthPageSheetHeaderView : WAAuthPageSheetBaseView

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UIButton *infoButton;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
