@class NSString, AWETeenAlbumCollectListViewController;

@interface AWETeenAlbumCollectListSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate, AWETeenAlbumMessage>

@property (weak, nonatomic) AWETeenAlbumCollectListViewController *collectListViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)enterFrom;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)updateWatchedAlbumModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (Class)cellClass;

@end
