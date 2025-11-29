@class NSString, AWETeenSearchHistoryFooterView, AWETeenSearchHistoryViewModel;
@protocol AWETeenSearchVideoProtocol;

@interface AWETeenSearchHistoryViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWETeenSearchHistoryViewModel *viewModel;
@property (nonatomic) long long displayModel;
@property (retain, nonatomic) AWETeenSearchHistoryFooterView *footerView;
@property (nonatomic) long long lastSearchTrackReportIndex;
@property (nonatomic) BOOL needReportTrack;
@property (nonatomic) struct CGSize { double width; double height; } rotationToSize;
@property (weak, nonatomic) id<AWETeenSearchVideoProtocol> delegate;
@property (copy, nonatomic) id /* block */ bottomLineChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchWithKeyword:(id)a0;
- (void)p_reloadCollectionView;
- (void)p_setupBinding;
- (void)reloadCollectionViewForRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_footerButtonAction;
- (void)trackAllSearchHistoryShow;
- (BOOL)shouldShowSearchHistory;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)a0;

@end
