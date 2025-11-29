@class NSString, UIImageView, UIView, MMUILabel;

@interface MMLimitedModeConfigCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL showBottomLine;
@property (nonatomic) BOOL showRightArrow;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSString *title;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithBiz:(long long)a0 cellType:(long long)a1;
- (unsigned long long)accessibilityTraits;
- (void)initUI;
- (void).cxx_destruct;

@end
