@class UIStackView, IESECSKUNewSpecItemModel, UILabel, UIView, IESECUIImageView;
@protocol IESECSKUNewSpecCellDelegate;

@interface IESECSKUNewSpecCell : UICollectionViewCell

@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESECUIImageView *picImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESECUIImageView *tipIcon;
@property (retain, nonatomic) UIView *tipView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) id<IESECSKUNewSpecCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUNewSpecItemModel *viewModel;

+ (id)normalBGColor;
+ (id)nameNormalColor;
+ (id)borderNormalColor;
+ (id)nameDisableColor;
+ (id)miniNameFont;
+ (double)specMaxWidth:(id)a0;
+ (id)selectedNameFont;
+ (BOOL)isSignleLine:(id)a0 icon:(id)a1 font:(id)a2 maxWidth:(double)a3;
+ (id)selectedMiniNameFont;
+ (struct CGSize { double x0; double x1; })specSize:(id)a0 icon:(id)a1 font:(id)a2 maxWidth:(double)a3;
+ (struct CGSize { double x0; double x1; })cellSizeWithItem:(id)a0;
+ (id)nameFont;

- (void)updateAccessibility;
- (id)selectedBGColor;
- (void)tapGestureFired:(id)a0;
- (id)nameSelectedColor;
- (id)borderSelectColor;
- (void)tapCoverImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
