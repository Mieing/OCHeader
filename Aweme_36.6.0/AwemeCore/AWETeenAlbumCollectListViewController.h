@class NSString, AWEUILoadingView;

@interface AWETeenAlbumCollectListViewController : AWEBaseListViewController <AWETeenWaterfallCollectionViewLayoutDelegate, AWETeenAlbumCollectMessage>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (long long)collectionView:(id)a0 layout:(id)a1 columnCountForSection:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumColumnSpacingForSectionAtIndex:(long long)a2;
- (void)setupNavBar;
- (void)p_stopLoading;
- (void)p_startLoading;
- (void)didUpdateAlbumCollectStatus:(long long)a0 albumID:(id)a1;
- (void)handleDataState:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)backAction;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;

@end
