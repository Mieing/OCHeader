@class AWELVideoLibraryPageContext;

@interface AWELVideoLibraryResultSectionController : AWELVideoAlbumBaseSectionController

@property (retain, nonatomic) AWELVideoLibraryPageContext *pageContext;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)enterFrom;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)trackLVideoClickWithModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
