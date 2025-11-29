@class AWEProfileMenuFunctionModel, UIImageView, CAShapeLayer, UILabel, UIView;
@protocol AWESettingSwitchProtocol;

@interface AWEProfileMenuCollectionViewCell : UICollectionViewCell

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *descriptionInfoImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *toggle;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *separateLineView;
@property (retain, nonatomic) AWEProfileMenuFunctionModel *model;
@property (copy, nonatomic) id /* block */ toggleBlock;
@property (nonatomic) BOOL hasDescription;
@property (copy, nonatomic) id /* block */ descriptionInfoClickedBlock;

+ (Class)aAWEPadModuleAdapterClass;
+ (double)heightWithModel:(id)a0;

- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (void)updateToggleState:(BOOL)a0;
- (void)descriptionInfoClicked;
- (void)toggleSwitched;
- (void)configWithModel:(id)a0 cellType:(unsigned long long)a1;
- (void)updateToggleEnable:(BOOL)a0;
- (void)updateCorner:(unsigned long long)a0 radius:(double)a1;
- (void)hideSeperateLine;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isOn;
- (void)prepareForReuse;
- (BOOL)accessibilityActivate;

@end
