@class UIColor, NSArray, NSTimer, NSMutableArray;
@protocol AWENearbyPOIInfoCardModel;

@interface AWENearbyPOIDanmakuView : UIView

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> model;
@property (retain, nonatomic) UIColor *itemBGColor;
@property (nonatomic) BOOL isItemBGUpdate;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) long long maxDisplayCount;

- (void)updateViewLayout;
- (void)startRowAnimation;
- (void)updateDataWithItems:(id)a0;
- (void)pauseRowAnimation;
- (void)configViewsWithModel:(id)a0;
- (void)updateItemColor;
- (long long)kDanmakuItemHeight;
- (long long)kDanmakuItemMargin;
- (void)__updateHeightWithCount:(long long)a0 model:(id)a1;
- (void)__configViewsWithModel:(id)a0 maxDisplayCount:(long long)a1;
- (void)resumRowAnimation;
- (void)updateHeightWithCount:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
