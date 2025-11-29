@class UILabel, IESECSKUSpecItemInfo, IESECUIImageView;
@protocol IESECCommentSKUSpecCellDelegate;

@interface IESECCommentSKUSpecCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESECUIImageView *iconImageView;
@property (weak, nonatomic) id<IESECCommentSKUSpecCellDelegate> delegate;
@property (retain, nonatomic) IESECSKUSpecItemInfo *viewModel;

+ (id)selectedBGColor;
+ (id)normalBGColor;
+ (id)nameNormalColor;
+ (id)borderNormalColor;
+ (id)nameDisableColor;
+ (id)nameSelectedColor;
+ (id)borderSelectColor;
+ (struct CGSize { double x0; double x1; })cellSizeWithName:(id)a0 icon:(id)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
+ (id)nameFont;

- (void)updateAccessibility;
- (void)tapGestureFired:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
