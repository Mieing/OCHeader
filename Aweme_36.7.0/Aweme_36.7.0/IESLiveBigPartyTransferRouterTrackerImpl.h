@class HTSEventContext, NSString;

@interface IESLiveBigPartyTransferRouterTrackerImpl : NSObject <IESLiveRevenueInteractAction, IESLiveBigPartyTransferRouterTracker>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (BOOL)isInPKAudienceLinkmic;
- (void)trackCustomEvent:(id)a0 extra:(id)a1;
- (BOOL)isInPK;
- (BOOL)p_isSelfAudience;
- (id)pkExtraParams;
- (id)pkExtraParamsWithState:(BOOL)a0;
- (void).cxx_destruct;

@end
