@class NSString, MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfAnchorProductCellsResponder : NSObject <MMFinderLiveAnchorGoodsCellDelegate>

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinator:(id)a0;
- (void)onStartRecordPromotionReplay:(id)a0;
- (void)internalStartRecordPromotionReplay:(id)a0;
- (void)onStopRecordPromotionReplay:(id)a0;
- (void)onDeleteRecordPromotionReplay:(id)a0;
- (void)reportAnchorAction:(long long)a0 productId:(unsigned long long)a1;
- (void)reportAnchorAction:(long long)a0 productId:(unsigned long long)a1 extraParams:(id)a2;
- (void)onPromoteButtonClicked:(id)a0;
- (void)onPromoteButtonSubPartClicked:(id)a0;
- (void)onBulkBuyPromoteButtonClicked:(id)a0;
- (void)updatePromoteProductStatusWithGoodsItem:(id)a0 businessTypeIfWillPromote:(int)a1;
- (void)updatePromoteStatus:(BOOL)a0 withID:(id)a1 businessType:(int)a2 replayInfo:(id)a3;
- (long long)getPromoteUserType;
- (void).cxx_destruct;

@end
