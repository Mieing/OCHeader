@class BDImageView, NSString, UIImageView, AWEAwemeModel, YYLabel;

@interface AWEAdNativeAnchorShopView : UIView <AWEAdNativeAnchorViewProtocol>

@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIImageView *topLittleImageView;
@property (retain, nonatomic) UIImageView *bottomLittleImageView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long componentType;
@property (nonatomic) long long buttonHeight;
@property (copy, nonatomic) id /* block */ adClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)setUpConstraint;
- (void)onAnchorClicked:(id)a0;
- (void)setUpArrowImage;
- (void)setUpDescriptionLabel:(id)a0;
- (void)setUpTitleLabel:(id)a0;
- (void)setUpCoverImage:(id)a0;
- (void)setUpIconImage:(id)a0;
- (BOOL)p_floatEqualZero:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
