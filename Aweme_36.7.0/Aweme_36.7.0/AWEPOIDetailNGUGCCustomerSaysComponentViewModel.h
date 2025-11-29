@class NSString, AWEPOIDetailNGPageContext, AWEPOIDetailNGUGCTrackShowConstraint, AWEPOIDetailNGUGCCustomerSaysComponentView, AWEPOIFeedUgcHeaderModel;

@interface AWEPOIDetailNGUGCCustomerSaysComponentViewModel : DitoComponentViewModel <AWEPOIDetailFeedUgcCustomerSaysCellDelegate>

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (retain, nonatomic) AWEPOIDetailNGUGCTrackShowConstraint *trackShowConstraint;
@property (nonatomic) BOOL floating;
@property (retain, nonatomic) AWEPOIFeedUgcHeaderModel *headerModel;
@property (weak, nonatomic) AWEPOIDetailNGUGCCustomerSaysComponentView *componentView;
@property (readonly, nonatomic) double marginTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)poiDetail;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)componentViewDidCompleteShow;
- (void)waterfallCellNeedReload:(id)a0;
- (void)didSelectUgcTagWithModel:(id)a0;
- (void)storeUgcRateListPageClickMethod:(id)a0;
- (void)handleHeaderInIsolatedPage;
- (void)hideInfoIfNeed;
- (void)componentScrollToTop;
- (void)retryFetchTagData;
- (double)fetchShowFloatTagsOffset;
- (void)stickActionWithScrollView:(id)a0;
- (void)componentViewWillEndShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
