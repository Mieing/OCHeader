@class FinderLiveCreatorService, WCFinderPersonalCenterLayout, UICollectionView, NSArray, NSString;

@interface WCFinderLivePersonalCenterAccountServiceViewController : MMCPUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderPersonalCenterLayout *flowLayout;
@property (retain, nonatomic) FinderLiveCreatorService *subService;
@property (retain, nonatomic) NSArray *sectionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubService:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)getViewController;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)creatorFunctionSectionCellDidSelect:(id)a0 hasRedDot:(BOOL *)a1;
- (void).cxx_destruct;

@end
