@class NSString;

@interface AWETeenDiscoverWaterfallSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate, IGListScrollDelegate, AWETeenAlbumMessage, AWETeenDiscoverSectionControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppear;

- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (id)enterFrom;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)listAdapter:(id)a0 didEndDeceleratingSectionController:(id)a1;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (double)minimumColumnSpacing;
- (void)updateWatchedAlbumModel:(id)a0;
- (void)sectionTrackAppear;
- (id)p_constructMinorAlbum:(id)a0;
- (void)p_updateDynamicCoverWithWillDisplayCell:(id)a0 willDisplayIndexPath:(id)a1;
- (void)p_updateDynamicCover;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (long long)columnCount;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
