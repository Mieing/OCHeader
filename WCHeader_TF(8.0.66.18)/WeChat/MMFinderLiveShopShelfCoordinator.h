@class MMFinderLiveShopContext, MMFinderLiveTask, MMFinderLiveTaskId, MMFinderLiveShopShelfView, MMFinderLiveShopShelfAnchorProductCellsResponder, MMFinderLiveShopShelfBulkBuyAudienceResponder, WCFinderLiveAudienceLogReporter, MMFinderLiveShopSelfOpenContext, MMFinderLiveShopShelfHeaderViewModel, FinderLiveGetShopShelfResponse, MMFinderLiveShopShelfBulkBuyResponder, NSMutableSet, NSString, NSArray;
@protocol MMFinderLiveShopShelfViewDelegate;

@interface MMFinderLiveShopShelfCoordinator : NSObject <WCFinderLiveExt>

@property (retain, nonatomic) MMFinderLiveShopShelfAnchorProductCellsResponder *anchorProductCellsResponder;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse *shopShelfInfo;
@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyResponder *bulkBuyResponder;
@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyAudienceResponder *bulkBuyAudienceResponder;
@property (retain, nonatomic) NSMutableSet *exposedInvalidReplayIDs;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *headerViewModel;
@property (weak, nonatomic) MMFinderLiveShopShelfView *shopShelfView;
@property (retain, nonatomic) NSArray *coupons;
@property (readonly, weak, nonatomic) id<MMFinderLiveShopShelfViewDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) MMFinderLiveShopContext *shopContext;
@property (readonly, nonatomic) BOOL isAnchorOrAssistant;
@property (readonly, nonatomic) BOOL isAssistant;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) BOOL isNormalAudience;
@property (readonly, nonatomic) BOOL isLocalLife;
@property (readonly, nonatomic) WCFinderLiveAudienceLogReporter *audienceLogReporter;
@property (retain, nonatomic) MMFinderLiveShopSelfOpenContext *openContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSectionHeaderAddGoodsClicked;
- (void)onSectionHeaderFlashSaleClicked;
- (void)onSectionHeaderManageGoodsClicked;
- (id)initWithTaskID:(id)a0;
- (void)updateWithShopShelfInfo:(id)a0;
- (void)performBlockAfterOrientationPortrait:(id /* block */)a0;
- (id)orientationPortrait;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)a0 shopInfo:(id)a1;
- (void).cxx_destruct;

@end
