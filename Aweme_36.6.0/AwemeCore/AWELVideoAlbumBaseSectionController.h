@class AWELVideoHallTracker, AWEVideoHallPageContext;

@interface AWELVideoAlbumBaseSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (retain, nonatomic) AWEVideoHallPageContext *context;

- (id)enterFrom;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)trackLVideoClickWithModel:(id)a0 index:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
