@class NSString, UICollectionView, AWEUILoadingView, AWETeenSubscribeListDataController, UIView;

@interface AWETeenSubscribeListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenSubscribeMessage, AWETeenBlockMessage>

@property (retain, nonatomic) AWETeenSubscribeListDataController *dataController;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *backGroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)loadMoreData;
- (void)updateLoadingStatus:(BOOL)a0;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)didUpdateBlockStatus:(long long)a0 secUserID:(id)a1;
- (double)getLabelHeightWithFixedWidth:(double)a0 andFixedFont:(id)a1 andContent:(id)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)refreshData;
- (void)back;

@end
