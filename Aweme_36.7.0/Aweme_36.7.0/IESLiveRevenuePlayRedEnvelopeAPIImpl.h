@class NSString;

@interface IESLiveRevenuePlayRedEnvelopeAPIImpl : NSObject <IESLiveRevenuePlayRedEnvelopeAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchAllRedEnvelopesWithRoomId:(id)a0;
- (id)fetchGrabRedEnvelopUserListWithEnvelopeID:(id)a0 type:(id)a1 dressId:(id)a2 roomId:(id)a3;
- (void)requestLuckyboxShortTouchApiWithRoomId:(id)a0;
- (void)requestFollowInfoWithCompletion:(id /* block */)a0 room:(id)a1 user:(id)a2;
- (void)requestLuckyBoxReceiveApiWithReqType:(int)a0 boxIds:(id)a1 completion:(id /* block */)a2;

@end
