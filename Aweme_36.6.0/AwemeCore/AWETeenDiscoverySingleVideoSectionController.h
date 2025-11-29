@class NSString;

@interface AWETeenDiscoverySingleVideoSectionController : AWEBaseListSectionController <AWETeenAlbumMessage, AWETeenDiscoverSectionControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppear;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)updateWatchedAlbumModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
