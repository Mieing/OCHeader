@class AWEIMB2CBottomFloatingAndPanelCellViewModel, UIImageView, UIView, YYLabel;

@interface AWEIMB2CBottomFloatingAndPanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEIMB2CBottomFloatingAndPanelCellViewModel *viewModel;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *separator;

- (void)__setupUI;
- (void)__configWithScene:(unsigned long long)a0 style:(unsigned long long)a1;
- (id)__attributedTextWithComponentInfoAndKeyword;
- (id)titleLabelBottomTextColor;
- (id)titleLabelBottomMoreTextColor;
- (id)titleLabelBottomMoreTextFont;
- (id)titleLabelFloatInputTextColor;
- (id)titleLabelFloatInputTextFont;
- (id)titleLabelFloatInputMoreTextColor;
- (id)titleLabelFloatInputMoreTextFont;
- (id)titleLabelPanelTextColor;
- (id)titleLabelPanelFont;
- (id)titleLabelPanelMoreTextColor;
- (id)titleLabelPanelMoreTextFont;
- (void)configPanelIconImage;
- (void)configBottomIconImage;
- (void)__configBottomFloatingViewWithStyle:(unsigned long long)a0;
- (void)configNewPanelViewLayout;
- (void)configOldFloatInputTextView;
- (void)configOldPanelViewLayout;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
