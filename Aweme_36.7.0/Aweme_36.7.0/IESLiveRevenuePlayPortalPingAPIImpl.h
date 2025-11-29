@class NSString;

@interface IESLiveRevenuePlayPortalPingAPIImpl : NSObject <IESLiveRevenuePlayPortalPingAPI>

@property (nonatomic) BOOL shouldReceiverPingClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitor_portalPingWithType:(unsigned long long)a0 portalID:(id)a1 duration:(double)a2 error:(id)a3;
- (void)pr_startPingWithType:(unsigned long long)a0 portalID:(id)a1 nextPingTime:(long long)a2 roomId:(id)a3;
- (void)handlePingResultWithType:(unsigned long long)a0 model:(id)a1 portalID:(id)a2 roomId:(id)a3 completion:(id /* block */)a4;
- (void)stopReceiverPing;
- (void)startPortalPingWithType:(unsigned long long)a0 portalID:(id)a1 roomId:(id)a2 completion:(id /* block */)a3;

@end
