@class NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface AWEEcomSearchMerchandiseExposureListController : AWEEcomSearchListBaseController

@property (retain, nonatomic) NSMutableSet *docInfoSetContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reportTimer;
@property (retain, nonatomic) NSMutableSet *merchandiseShowOnce;
@property (retain, nonatomic) NSMutableSet *windowProductShowOnce;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isScrollUp;
@property (nonatomic) long long lastcontentOffset;
@property (copy, nonatomic) id /* block */ sortAndFilterShouldReload;

- (id)filterManager;
- (void)collectionView:(id)a0 willDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2 withModel:(id)a3;
- (id)componentCell;
- (void)reportDocInfo;
- (id)addressSource;
- (id)sortFilterView;
- (void)creatReportDocInfoTimer;
- (id)getSetDocModel:(id)a0;
- (id)addressView;
- (void)trackNoResultShowWithResultType:(id)a0;
- (void)trackFeedbackShow;
- (BOOL)enableETrackWithModel:(id)a0;
- (void)trackSearchResultShow:(id)a0;
- (void)trackAdShowWithModel:(id)a0;
- (void)trackAdEndorseWithCell:(id)a0;
- (void)trackMerchandiseGoods:(id)a0 indexPath:(id)a1;
- (void)bindBstWithModel:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (void)searchADOperationToolViewWillDisplay:(id)a0 aweme:(id)a1;
- (void)trackProductTabCommerceBreakWithCell:(id)a0 model:(id)a1;
- (void)resetAdEndorseWithCell:(id)a0;
- (void)resetAdShowWithModel:(id)a0;
- (void)searchADOperationToolViewDidEndDisplay:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)srp;
- (void)viewWillDisappear;

@end
