@class NSHashTable, NSString, IESLiveFeedDrawerHistoryCollectionView, IESLiveFeedDrawerHistoryDeleteApi, IGListAdapter, IESLiveFeedDrawerHistoryMoreModel, NSMutableArray, IESLiveFeedDrawerViewControllerContext;
@protocol IESLiveFeedDrawerItemProtocol;

@interface IESLiveFeedDrawerHistoryView : UIView <IGListAdapterDataSource>

@property (retain, nonatomic) IESLiveFeedDrawerHistoryCollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryDeleteApi *deleteApi;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (retain, nonatomic) NSMutableArray<IESLiveFeedDrawerItemProtocol> *items;
@property (retain, nonatomic) NSMutableArray<IESLiveFeedDrawerItemProtocol> *substituteItems;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryMoreModel *moreItem;
@property (retain, nonatomic) NSHashTable *allSectionControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)setHistoryItems:(id)a0 context:(id)a1;
- (void)trackCellWillShow;
- (long long)historyCardItemsCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
