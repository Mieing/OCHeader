@class NSMutableDictionary, NSArray, UIView, NSMutableArray;
@protocol WSWebRecommendTabsViewDelegate;

@interface WSWebRecommendTabsView : UIView

@property (retain, nonatomic) UIView *tabUnderLine;
@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSMutableDictionary *reddotStatusDic;
@property (retain, nonatomic) NSArray *tabListData;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<WSWebRecommendTabsViewDelegate> delegate;

+ (BOOL)isHasNewLifeTab:(id)a0;
+ (BOOL)isHasMegaVideoTab:(id)a0;
+ (double)getTabBarItemWidth:(id)a0;
+ (double)tabViewBottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refreshTabLanguage;
- (double)getHorizolMargin:(id)a0;
- (double)getZaiKanTabIconSizeNew;
- (struct CGSize { double x0; double x1; })calculateZaiKanTabLabelSizeNew:(id)a0;
- (BOOL)configTabList:(id)a0;
- (id)tabViewForInfo:(id)a0;
- (long long)outsideCallTabSelectedWithCategory:(long long)a0;
- (void)outsideCallTabSelected:(long long)a0 reason:(unsigned long long)a1;
- (void)updateTabButtonState:(long long)a0 needAnim:(BOOL)a1;
- (void)tabButtonClicked:(id)a0;
- (void)tabButtonSelected:(id)a0 index:(long long)a1 reason:(unsigned long long)a2;
- (void)refreshReddotLayout;
- (void)clearReddotStatus;
- (void)innerConfigContentReddot;
- (void)configContentReddot:(BOOL)a0 numberReddot:(long long)a1 withCategory:(long long)a2;
- (void)configContentUI:(BOOL)a0 numberOnRedDot:(long long)a1 withCategory:(long long)a2;
- (id)outsideGetTabsReddotInfoDic;
- (void)scrollToPosition:(double)a0;
- (void)updateUnderLinePos:(double)a0;
- (void)updateButtonColor:(double)a0;
- (void).cxx_destruct;

@end
