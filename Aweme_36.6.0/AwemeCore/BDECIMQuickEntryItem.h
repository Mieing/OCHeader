@class UIImageView, UILabel, UIView, AWEECOMIMRedDotView;

@interface BDECIMQuickEntryItem : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEECOMIMRedDotView *redDotView;

+ (BOOL)isQuickOptButtonNewStyle;
+ (double)iconTextSpacing;
+ (double)iconWidth;
+ (id)identifier;

- (void)bindEntryItem:(id)a0;
- (void)setPositionInfo:(BOOL)a0 isLast:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
