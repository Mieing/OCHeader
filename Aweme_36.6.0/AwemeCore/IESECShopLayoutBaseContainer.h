@class UIView, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSMutableOrderedSet, IESECShopLayoutBaseItem;
@protocol IESECShopLayoutBaseContainerDelegate, IESECShopPageContextV2, IESECShopLayoutManager;

@interface IESECShopLayoutBaseContainer : NSObject <IESECShopForwardViewDelegate>

@property (retain, nonatomic) IESECShopLayoutBaseItem *layoutItem;
@property (retain, nonatomic) NSMutableArray *subItems;
@property (retain, nonatomic) NSMutableDictionary *subItemMap;
@property (weak, nonatomic) IESECShopLayoutBaseContainer *parentContainer;
@property (retain, nonatomic) NSMutableOrderedSet *childContainerSet;
@property (nonatomic) BOOL isViewLoaded;
@property (weak, nonatomic) id<IESECShopPageContextV2> pageContextV2;
@property (weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (weak, nonatomic) id<IESECShopLayoutBaseContainerDelegate> delegate;
@property (copy, nonatomic) NSArray *allowedViewTypes;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *viewType;
@property (readonly, copy, nonatomic) NSArray *childContainers;
@property (nonatomic) unsigned long long layoutStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForType:(id)a0;
- (void)removeViewType:(id)a0;
- (void)addChildContainer:(id)a0;
- (unsigned long long)targetIdxForContainerViewType:(id)a0;
- (id)parentLayoutContainerViewForViewType:(id)a0;
- (void)bindView:(id)a0 viewType:(id)a1 constraintMaker:(id /* block */)a2;
- (id)parentLayoutContainerForViewType:(id)a0;
- (id)layoutItemWithView:(id)a0 viewType:(id)a1 constraintMaker:(id /* block */)a2;
- (void)bindLayoutItem:(id)a0;
- (void)p_didBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (id)layoutItemForViewType:(id)a0;
- (void)p_willRemoveView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)removeLayoutItem:(id)a0;
- (void)didBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)willRemoveView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)bindContextForChildContainer:(id)a0;
- (void)p_willMoveToParentContainer:(id)a0;
- (id)layoutItemWithView:(id)a0 viewType:(id)a1;
- (void)p_didAddChildContainer:(id)a0;
- (void)p_didMoveToParentContainer:(id)a0;
- (void)p_willRemoveChildContainer:(id)a0;
- (id)layoutContainerForViewType:(id)a0;
- (void)didAddChildContainer:(id)a0;
- (void)willRemoveChildContainer:(id)a0;
- (void)willMoveToParentContainer:(id)a0;
- (void)didMoveToParentContainer:(id)a0;
- (BOOL)isContainerViewType:(id)a0;
- (unsigned long long)p_targetIdxForContainerViewType:(id)a0;
- (void)bindViewForLayoutItem:(id)a0 targetIdx:(unsigned long long)a1;
- (BOOL)isAllowedViewType:(id)a0;
- (unsigned long long)targetIdxForAllowedViewType:(id)a0 withSubItems:(id)a1;
- (id)p_parentLayoutContainerViewForViewType:(id)a0;
- (void)bindView:(id)a0 viewType:(id)a1;
- (void)enumerateBindingViewsUsingBlock:(id /* block */)a0;
- (void)removeChildContainer:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;

@end
