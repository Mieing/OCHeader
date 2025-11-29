@class UIView, NSString, NSIndexPath, AWEDoubleColumnSearchMerchandiseAwemeListController, NSDictionary, AWESearchEcommerceActionRecord, UICollectionView, AWESearchCorrectView, AWETrackerContext, UIViewController;
@protocol AWESearchResultVCEcomProtocol, AWEEcomSearchSuspensionLayerProtocol;

@interface AWEEcomSearchListBaseController : AWEBaseController

@property (readonly, nonatomic) NSString *currentFormat;
@property (readonly, nonatomic) BOOL isFromECommerce;
@property (readonly, copy, nonatomic) NSString *ecomScene;
@property (readonly, copy, nonatomic) NSString *originalFormat;
@property (readonly, nonatomic) AWESearchEcommerceActionRecord *actionRecord;
@property (readonly, nonatomic) UIViewController<AWEEcomSearchSuspensionLayerProtocol> *suspensionLayer;
@property (readonly, nonatomic) AWESearchCorrectView *suggestView;
@property (readonly, nonatomic) AWETrackerContext *trackerContext;
@property (readonly, copy, nonatomic) NSDictionary *extraPerfLog;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *keyword;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, weak, nonatomic) UIViewController<AWESearchResultVCEcomProtocol> *searchResultViewController;
@property (retain, nonatomic) id playerView;
@property (retain, nonatomic) id player;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseAwemeListController *awemeListController;
@property (retain, nonatomic) NSIndexPath *transitionIndexPath;

- (id)btm_pageIdentifier;
- (id)insertCouponConfig;
- (id)getEnterFromSource;
- (id)createDataController;
- (void)jumpToFeedBoxBannerPageWithTypeSort:(id)a0;
- (void)jumpToUseIndustryCouponWithModel:(id)a0 atIndexPath:(id)a1;
- (void)sendShowDocsReportRequest:(id)a0 initialParams:(id)a1;
- (void)calculateBackgroundPositionAndShow;
- (void)adjustFilterExpandViewPosition:(id)a0;
- (id)resultSourceForIndexPath:(id)a0;
- (id)appendCommondParamsInLogExtra:(id)a0;
- (id)btmForCellType:(long long)a0 index:(long long)a1 isRecommend:(BOOL)a2 model:(id)a3;
- (id)bcmDescriptionForCellType:(long long)a0;
- (id)getSearchPassThroughParams:(id)a0;
- (id)bstGroupTypeForCellType:(long long)a0;
- (id)btmInfoForCellType:(long long)a0 enterNewPage:(BOOL)a1 index:(long long)a2 isRecommend:(BOOL)a3 model:(id)a4;
- (id)srp;

@end
