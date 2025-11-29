@class NSString, AWETheaterPageContext, AWETheaterTracker;

@interface AWETheaterMultiCardSectionController : AWEBaseListSectionController <AWETheaterSectionControllerProtocol>

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (id)cellIdentifierForModel:(id)a0 index:(long long)a1;
- (void)trackClickCard:(id)a0 model:(id)a1 index:(long long)a2;
- (void)trackLVideoClickWithModel:(id)a0 clickMethod:(id)a1 clickTab:(id)a2;
- (void)trackLVideoShowWithModel:(id)a0;
- (void)trackShowCard:(id)a0 model:(id)a1 index:(long long)a2;
- (id)longVideoTrackerParamsWithModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
