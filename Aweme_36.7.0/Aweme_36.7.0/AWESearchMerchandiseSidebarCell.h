@class NSString, AWEUITheme, UILabel, UIView;

@interface AWESearchMerchandiseSidebarCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *redBadge;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEUITheme *currentTheme;
@property (nonatomic) BOOL showRedBadge;

- (void)addShapeLayerByRoundingCorners:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpUI;

@end
