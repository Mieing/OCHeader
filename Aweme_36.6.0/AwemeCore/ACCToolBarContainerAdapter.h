@class AWEEditActionItemView, NSString, UIView, ACCToolBarCommonViewLayout, AWEVideoPublishViewModel, NSMutableArray, NSNumber;
@protocol ACCToolBarCommonProtocol, IESServiceProvider, ACCBarItemSortDataSource, ACCToolBarContainerInterface;

@interface ACCToolBarContainerAdapter : NSObject <ACCPanelViewDelegate, ACCRecorderBarItemContainerView, ACCEditTRBarItemContainerView>

@property (retain, nonatomic) id<ACCToolBarContainerInterface, ACCToolBarCommonProtocol> container;
@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACCToolBarCommonViewLayout *layout;
@property (retain, nonatomic) id<ACCBarItemSortDataSource> sortDataSource;
@property (copy, nonatomic) id /* block */ shouldUpdateItemBlock;
@property (retain, nonatomic) NSNumber *maxHeightValue;
@property (readonly, nonatomic) AWEEditActionItemView *moreItemView;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) id /* block */ clickCallback;

+ (id)generateToolBarContainerWithContentView:(id)a0 Page:(unsigned long long)a1 publishModel:(id)a2 config:(id)a3;

- (id)toolBarContainer;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)sensorialRender;
- (id)viewWithBarItemID:(void *)a0;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemId:(void *)a0;
- (void)markUpdateBarItemWithItemId:(void *)a0 animated:(BOOL)a1;
- (id)barItemWithItemId:(void *)a0;
- (id)barItemContentView;
- (BOOL)addBarItem:(id)a0;
- (void)setServiceContainer:(id)a0;
- (void)setExcludeList:(id)a0;
- (void)updateAllBarItemsImmediatellyWithouAnimation;
- (id)viewIndexWithBarItemID:(void *)a0;
- (void)resetFoldState;
- (void)updateAllBarItemsRotate:(double)a0 animated:(BOOL)a1;
- (id)initWithContentView:(id)a0 Page:(unsigned long long)a1 publishModel:(id)a2 config:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertVisiableFrameToView:(id)a0;
- (void)hideMoreButton:(BOOL)a0 isFolded:(BOOL)a1 animated:(BOOL)a2;
- (void)removeBarItem:(void *)a0;
- (void)addFoldOrExpandBlock:(id /* block */)a0;
- (BOOL)addMoreBarItem:(id)a0;
- (void)removeMoreBarItem:(void *)a0;
- (void)updateBarItemContainerViewTop:(double)a0;
- (void)hideAllLabel;
- (void)triggerClickCallbackWithView:(id)a0;
- (void)addClickCallback:(id /* block */)a0;
- (void)setMoreTouchUpEvent:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)containerViewDidLoad;
- (id)barItems;

@end
