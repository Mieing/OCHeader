@class NSNumber, NSMutableArray, UIView;

@interface AFDDotsIndicatorView : UIView

@property (retain, nonatomic) NSMutableArray *dotViews;
@property (nonatomic) long long selectedPositionOffset;
@property (nonatomic) unsigned long long colorStyle;
@property (retain, nonatomic) NSNumber *dotMaxSize;
@property (retain, nonatomic) NSNumber *dotMidSize;
@property (retain, nonatomic) NSNumber *dotLongSelectedSizeWidth;
@property (retain, nonatomic) UIView *gradientView;
@property (nonatomic) BOOL needBlurBackground;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) unsigned long long style;

- (id)dotViewAtIndex:(long long)a0;
- (id)initWithColoStyle:(unsigned long long)a0 dotMaxSize:(id)a1 dotMidSize:(id)a2 dotLongSelectedSizeWidth:(id)a3 needBlurBackground:(BOOL)a4;
- (id)initWithColoStyle:(unsigned long long)a0;
- (void)setCurrentPage:(long long)a0 offset:(id)a1 animated:(BOOL)a2;
- (id)dotViewsArray;
- (id)getCurrentDotFromCenter;
- (id)initWithColoStyle:(unsigned long long)a0 dotMaxSize:(id)a1 dotMidSize:(id)a2 needBlurBackground:(BOOL)a3;
- (void)createDots;
- (BOOL)useSysStyle;
- (void)receateAll;
- (void)reuseViewForDirection:(long long)a0;
- (void)layoutForNewStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
