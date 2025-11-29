@class MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfBulkBuyResponder : NSObject

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *shopShelfCoordinator;

- (void)onBulkBuy:(id)a0 memberClicked:(id)a1;
- (void)onBulkBuyMembersTotalClicked:(id)a0;
- (void)onBulkBuyClicked:(id)a0;
- (void)onBulkBuyWillDisplay:(id)a0;
- (void).cxx_destruct;

@end
