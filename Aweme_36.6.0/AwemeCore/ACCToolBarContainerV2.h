@class UIView, ACCToolBarItemsModel, NSArray, ACCCameraSubscription, AWEToolBarSectionFoldView, AWEVideoPublishViewModel, NSString, NSMutableArray, ACCToolBarCommonViewLayout, ACCToolBarContainerConfig;
@protocol ACCBarItemSortDataSource;

@interface ACCToolBarContainerV2 : NSObject <UIGestureRecognizerDelegate, ACCToolBarContainerInterface, ACCToolBarCommonProtocol>

@property (retain, nonatomic) ACCToolBarContainerConfig *config;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) ACCToolBarItemsModel *model;
@property (retain, nonatomic) AWEToolBarSectionFoldView *toolBarView;
@property (copy, nonatomic) NSArray *recordSectionPermanentList;
@property (copy, nonatomic) NSArray *editSectionPermanentList;
@property (copy, nonatomic) NSArray *excluedList;
@property (nonatomic) double containerTopMargin;
@property (retain, nonatomic) ACCToolBarCommonViewLayout *layout;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *recordFoldCallbacks;
@property (copy, nonatomic) id /* block */ clickItemBlock;
@property (copy, nonatomic) id /* block */ clickMoreBlock;
@property (retain, nonatomic) id<ACCBarItemSortDataSource> sortDataSource;
@property (copy, nonatomic) id /* block */ shouldUpdateItemBlock;

- (void)sensorialRender;
- (id)viewWithBarItemID:(void *)a0;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemId:(void *)a0;
- (void)markUpdateBarItemWithItemId:(void *)a0 animated:(BOOL)a1;
- (id)barItemWithItemId:(void *)a0;
- (id)barItemContentView;
- (BOOL)addBarItem:(id)a0;
- (void)p_setUpUI;
- (void)setExcludeList:(id)a0;
- (void)updateAllBarItemsImmediatellyWithouAnimation;
- (BOOL)p_itemInWhiteList:(id)a0;
- (void)realUpdateAllBarItemsOpt;
- (void)realUpdateAllBarItemsOptAnimated;
- (BOOL)p_shouldShowDivisionBarItemView;
- (id)viewIndexWithBarItemID:(void *)a0;
- (void)resetFoldState;
- (double)p_containerTopOffset;
- (void)updateAllBarItemsRotate:(double)a0 animated:(BOOL)a1;
- (id)p_sortedItems;
- (void)p_addDivisionIfNeeded:(BOOL)a0;
- (void)trackScrollExpand:(double)a0;
- (id)p_sortItemsWithBarItems:(id)a0 orderArray:(id)a1;
- (void)p_addDivisionBarItemWithItemId:(void *)a0;
- (id)initWithContentView:(id)a0 Page:(unsigned long long)a1 publishModel:(id)a2 config:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertVisiableFrameToView:(id)a0;
- (void)hideMoreButton:(BOOL)a0 isFolded:(BOOL)a1 animated:(BOOL)a2;
- (void)removeBarItem:(void *)a0;
- (void)updateBarItemContainerViewTop:(double)a0;
- (void)hideAllLabel;
- (void)p_insertDivisionBarItem;
- (void)p_removeDivisionBarItem;
- (void).cxx_destruct;
- (id)sortedItems;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)containerViewDidLoad;
- (id)barItems;

@end
