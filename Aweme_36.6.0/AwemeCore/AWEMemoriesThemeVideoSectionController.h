@class AWEMemoriesThemeVideoCell, NSString;

@interface AWEMemoriesThemeVideoSectionController : AWEBaseListSectionController <AWEMemoriesThemeVideoCellDelegate, AWEMemoriesPlayerSectionControllerProtocol>

@property (weak, nonatomic) AWEMemoriesThemeVideoCell *cell;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)playerWillStartNextLoop:(id)a0;
- (void)playSection;
- (void)pauseSection;
- (void)playSectionWithChangeSection:(BOOL)a0;
- (void)isActiveSlide:(BOOL)a0;
- (double)editEntranceBottomOffset;
- (void)enterThemeVideoEdit;
- (void)buildThemeVideoWithTileModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
