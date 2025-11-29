@class MMFinderLiveCommentEntranceView, MMFinderLiveTaskId, UIScrollView, NSMutableArray, FinderLiveBoxId;

@interface MMFinderLiveCommentEntranceTabBar : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) UIScrollView *entranceScrollView;
@property (retain, nonatomic) NSMutableArray *entranceViewList;
@property (retain, nonatomic) FinderLiveBoxId *currSelectBox;
@property (weak, nonatomic) MMFinderLiveCommentEntranceView *currSelectEntranceView;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ commentEntranceDidTapToChangeCallback;
@property (copy, nonatomic) id /* block */ commentEntranceSelectedChangeCallback;

+ (double)preferHeight;

- (id)initWithLiveTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutEntranceScrollView;
- (id)createEntranceView:(id)a0;
- (void)onEntranceViewListChanged;
- (id)getEntranceViewWithBoxId:(id)a0;
- (void)refreshEntranceViewUI;
- (void)updateSelfSize;
- (void)updateEntranceScrollContentSize;
- (double)getEntrancesSumContentWidth;
- (void)refreshUIForCurrentSelectBoxChanged;
- (id)getFinderLiveTask;
- (void)adjustContentOffsetForCurrSelectBoxIfNeed;
- (void)updateSelectEntranceView:(id)a0;
- (void)addBoxEntrance:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeBoxEntrance:(id)a0;
- (void)updateMaxWidth:(double)a0;
- (void)updateCurrSelectBox:(id)a0;
- (void)updateRedDot:(id)a0;
- (void)clearRedDotForEntrance:(id)a0;
- (void)reportGroupNameLabelClick:(id)a0;
- (void)reportGroupNameLabelExpose:(id)a0;
- (void).cxx_destruct;

@end
