@class NSString, UIImageView, AWEAwemeModel, UIView, YYLabel;

@interface AWEAdNativeAnchorProductView : UIView <AWEAdNativeAnchorViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
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
- (void)setUpDescriptionLabel;
- (void)setupAccessibilityWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
