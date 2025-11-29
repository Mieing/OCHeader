@class DUXTip, AWEOpenShareAlbumViewController, UICollectionView, AWEOpenShareAlbumResponseModel, NSString, AWEOpenShareResp;

@interface AWEOpenShareAlbumNonSelectCollectionVC : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) DUXTip *tip;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL totalRequestEnd;
@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) AWEOpenShareAlbumViewController *managerVC;
@property (retain, nonatomic) AWEOpenShareAlbumResponseModel *requestModel;
@property (retain, nonatomic) AWEOpenShareResp *resp;
@property (copy, nonatomic) id /* block */ clickTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAtLeastNonSelectVideoWithLock:(long long)a0 completion:(id /* block */)a1;
- (void)requestAtLeastNonSelectVideo:(long long)a0 completion:(id /* block */)a1;
- (void)updateCollectionContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
