@interface IESLiveRevenueActionsAdapterHandler : NSObject

- (void)didSetAttachingDIContext;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;

@end
