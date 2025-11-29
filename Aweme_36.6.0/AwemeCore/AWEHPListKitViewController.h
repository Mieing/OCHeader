@class NSString, IGListAdapter, UICollectionView, AWEHPListKitControllerManager;

@interface AWEHPListKitViewController : UIViewController <IGListAdapterDataSource>

@property (retain, nonatomic) AWEHPListKitControllerManager *controllerManager;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (double)calculateHPListKitViewHeight;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithManager:(id)a0;
- (void)viewDidLoad;

@end
