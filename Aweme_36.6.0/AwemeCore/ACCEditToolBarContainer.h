@class ACCCameraSubscription, NSMapTable, NSMutableDictionary, NSString, UIView, NSMutableArray;
@protocol ACCBarItemSortDataSource;

@interface ACCEditToolBarContainer : NSObject <ACCEditBarItemContainerView>

@property (retain, nonatomic) NSMutableArray *barItems;
@property (retain, nonatomic) NSMutableDictionary *barItemDictionary;
@property (retain, nonatomic) NSMapTable *viewCache;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) long long maxUnfoldCount;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) id /* block */ clickCallback;
@property (retain, nonatomic) id<ACCBarItemSortDataSource> sortDataSource;
@property (copy, nonatomic) id /* block */ shouldUpdateItemBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sensorialRender;
- (id)viewWithBarItemID:(void *)a0;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemId:(void *)a0;
- (void)markUpdateBarItemWithItemId:(void *)a0 animated:(BOOL)a1;
- (id)barItemWithItemId:(void *)a0;
- (id)barItemContentView;
- (BOOL)addBarItem:(id)a0;
- (void)updateAllBarItemsImmediatellyWithouAnimation;
- (id)viewIndexWithBarItemID:(void *)a0;
- (void)removeBarItem:(void *)a0;
- (BOOL)addMoreBarItem:(id)a0;
- (void)removeMoreBarItem:(void *)a0;
- (void)triggerClickCallbackWithView:(id)a0;
- (void)addClickCallback:(id /* block */)a0;
- (id)adaptBarItemToViewData;
- (id)sortedBarItem;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (id)initWithContentView:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)containerViewDidLoad;

@end
