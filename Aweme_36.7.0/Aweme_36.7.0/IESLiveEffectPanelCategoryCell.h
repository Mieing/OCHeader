@class UIImageView, NSURL, UILabel, UIView;

@interface IESLiveEffectPanelCategoryCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *selectedURL;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UIView *redDot;

- (void)configSubviews;
- (void)updateCellTitle:(id)a0 imageURL:(id)a1 selectedURL:(id)a2 showRedDot:(BOOL)a3;
- (void)updateImageName:(id)a0 title:(id)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;

@end
