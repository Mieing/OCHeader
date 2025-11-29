@class MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfBulkBuyAudienceResponder : NSObject

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *shopShelfCoordinator;

- (void)onBulkBuy:(id)a0 buttonClicked:(id)a1;
- (void)onAskForPromotingButtonClicked:(id)a0;
- (void)onWatchPromotingButtonClicked:(id)a0;
- (void)openBulkBuyPromotionReplayWithBulkBuy:(id)a0 url:(id)a1;
- (void).cxx_destruct;

@end
