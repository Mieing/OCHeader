@class NSString, AWEVideoHallPageContext, AWELVideoHallTracker;

@interface AWEVideoHallHistorySectionController : AWEBaseListSectionController <AWEVideoHallSectionControllerProtocol>

@property (retain, nonatomic) AWEVideoHallPageContext *context;
@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)trackLVideoShowWithIndex:(long long)a0;
- (void)handleHistoryClickWithIndex:(long long)a0;
- (void)trackHistoryClickWithIndex:(long long)a0;
- (id)trackerParamsWithIndex:(long long)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
