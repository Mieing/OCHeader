@class NSArray, NSString, UIScrollView, NSMutableArray, UIView;
@protocol WCFinderTimelineNaviTabsViewDelegate, WCFinderTimelineNaviTabsViewDataSource;

@interface WCFinderTimelineNaviTabsView : UIView <WCFinderTLTabButtonDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) id<WCFinderTimelineNaviTabsViewDelegate> delegate;
@property (weak, nonatomic) id<WCFinderTimelineNaviTabsViewDataSource> dataSource;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *tabUnderLine;
@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSArray *tabListData;
@property (nonatomic) double lastCursorValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLessThan400WidthScreen;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 dataSource:(id)a2;
- (void)setTabItemNormalColor:(id)a0 highlightColor:(id)a1;
- (void)layoutSubviews;
- (void)refreshTabSubViews;
- (void)resetTabButtonsSize;
- (id)viewWithTabType:(long long)a0;
- (BOOL)configTabList:(id)a0;
- (void)updateButtonImageForConfig:(id)a0 btn:(id)a1;
- (void)updateTabButtonsLayout;
- (void)setUpTabButtons;
- (BOOL)isSmallPhoneCase;
- (double)getCurrentButtonMargin;
- (double)getCurrentLeftRightPadding;
- (long long)timelineTabCount;
- (long long)getTabIndexFromTabType:(long long)a0;
- (long long)getTimelineTabTypeFromIndex:(long long)a0;
- (double)getUILabelWidthWithTips:(id)a0;
- (void)adjustTabButtonExpandHitTestArea;
- (void)tabButtonSingleClicked:(id)a0;
- (void)tabButtonDoubleClicked:(id)a0;
- (BOOL)configRedDotUIWithTabType:(long long)a0 showInfo:(id)a1;
- (id)getTabButtonByTabType:(long long)a0;
- (void)updateSlideProgress:(double)a0;
- (void)updateNaviLeftRighMastkState;
- (void)makeTargetBtnVisible:(id)a0 visibleProgress:(double)a1;
- (void)refreshTabGesture;
- (long long)getCurrentMaxAreaTabType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabUnderLineFrameForButton:(id)a0;
- (void)onSelectScrollDidEndWithTabType:(long long)a0 toTabType:(long long)a1;
- (void)refreshTabGestureToTabType:(long long)a0;
- (void)onTLTabButtonCleanLeftIconForButton:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
