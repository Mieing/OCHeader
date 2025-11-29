@interface AWELivePreStreamInnerRoomPKConfig : AWELiveSwiftImpl.AWELivePreStreamInnerRoomRevenueBaseConfig

- (id)bizType;
- (unsigned long long)promotionType;
- (void)didStartTimer;
- (BOOL)checkRelationship;
- (void)didEndTimer;
- (id)tips;
- (void)didRevenueInteractPlayStatusChanged:(BOOL)a0;
- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (id)enterRoomBuriedParams;
- (id)enterFirstRoomParams;

@end
