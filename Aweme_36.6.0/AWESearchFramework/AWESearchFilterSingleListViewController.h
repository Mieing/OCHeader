@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSArray, NSString, AWESearchFilterBaseManager;
@protocol AWESearchFilterSingleListDelegate;

@interface AWESearchFilterSingleListViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *modelsArray;
@property (nonatomic) long long listIndex;
@property (retain, nonatomic) AWESearchFilterBaseManager *filterManager;
@property (copy, nonatomic) NSArray *arrRegisteredCellIdentifiers;
@property (copy, nonatomic) NSString *bgColorString;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *parentModel;
@property (nonatomic, getter=isGroupBuyFilterOptimizationEnabled) BOOL groupBuyFilterOptimizationEnabled;
@property (weak, nonatomic) id<AWESearchFilterSingleListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListIndex:(long long)a0;
- (void)updateWithParentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;

@end
