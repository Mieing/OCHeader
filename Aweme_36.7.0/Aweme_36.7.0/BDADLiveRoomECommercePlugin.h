@class BDADPreviewToRoomModel, BDLiveCommerceFragment, NSString;

@interface BDADLiveRoomECommercePlugin : NSObject <BDADLiveRoomPlugin>

@property (retain, nonatomic) BDADPreviewToRoomModel *modelToLiveRoom;
@property (weak, nonatomic) BDLiveCommerceFragment *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)fetchAdCouponForAudience;
- (void)fetchNonAdCouponForAudience;
- (void)fetchNonAdCouponForAudienceInnerLive;
- (void)requestLiveAdCouponWithParam:(id)a0;
- (id)itemExplicitInfoDict;
- (id)enterLiveRoomData;
- (BOOL)shouldRecordNonAdAwemeModelToLiveRoomCouponToken;
- (void).cxx_destruct;

@end
