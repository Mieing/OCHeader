@class NSString;

@interface IESLiveRevenuePlayPortalStatsAPIImpl : NSObject <IESLiveRevenuePlayPortalStatsAPI>

@property (nonatomic) BOOL shouldSenderOrAnchorPingClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitor_portalUserWithDuration:(double)a0 error:(id)a1;
- (void)pr_startPing:(BOOL)a0 roomId:(id)a1 withCompletion:(id /* block */)a2;
- (void)stopSenderOrAnchorPing;
- (void)requestGiftPortalStatsStartWith:(id /* block */)a0 roomId:(id)a1 repeatWith:(id /* block */)a2;
- (void)startSenderOrAnchorPingWithRoomId:(id)a0;

@end
