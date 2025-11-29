@class UILabel, MMCameraTemplateItem, MMWebImageView;

@interface MJShootComposingTemplateItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMCameraTemplateItem *item;
@property (nonatomic) BOOL isCellSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)configCellWithItem:(id)a0;
- (void)updateAccessibility;
- (unsigned long long)accessibilityTraits;
- (id)genAccessibilityLabel;
- (void).cxx_destruct;

@end
