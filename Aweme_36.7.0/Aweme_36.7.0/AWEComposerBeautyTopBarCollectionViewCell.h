@class UIFont, UIColor, UILabel, UIView;

@interface AWEComposerBeautyTopBarCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *flagDotView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *underline;
@property (nonatomic) BOOL shouldShowUnderline;
@property (retain, nonatomic) UIFont *selectedTitleFont;
@property (retain, nonatomic) UIFont *unselectedTitleFont;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) UIColor *unselectedTitleColor;

+ (id)identifier;

- (void)setFlagDotViewHidden:(BOOL)a0;
- (void)updateWithTitle:(id)a0 selected:(BOOL)a1;
- (void)updateWithUserSelected:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
