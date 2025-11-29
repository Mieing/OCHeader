@class AWELiveAcqCastVideoMixScrollTailView, AWELiveAcqCastVideoMixDataManager, UICollectionView, NSString;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoProfileMixViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWELiveAcqCastVideoMixScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWELiveAcqCastVideoMixDataManager *dataManager;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFooterFrame;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
