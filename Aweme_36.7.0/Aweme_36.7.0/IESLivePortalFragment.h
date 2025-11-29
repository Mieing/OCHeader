@class IESLivePortalStore, NSString, HTSEventBuilder, IESLivePortalInvitationLynxView, IESLivePortalRedEnvelopeQueue, IESLiveGCDTimer, IESLivePortalSenderLynxView, NSObject, IESLivePortalRedEnvelopeLynxView;
@protocol IESLiveRevenuePlayPortalStatsAPI, IESLiveRevenuePlayPortalPingAPI, OS_dispatch_queue, IESLiveURLSchemaHandler;

@interface IESLivePortalFragment : IESLiveRoomComponent <IESLivePortalReaction, IESLivePortalRouter>

@property (retain, nonatomic) IESLiveGCDTimer *countTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLivePortalSenderLynxView *senderView;
@property (retain, nonatomic) IESLivePortalInvitationLynxView *inviteView;
@property (retain, nonatomic) IESLivePortalRedEnvelopeLynxView *redEnvelopeView;
@property (retain, nonatomic) IESLivePortalStore *store;
@property (retain, nonatomic) HTSEventBuilder *eventContext;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLivePortalRedEnvelopeQueue *redEnvelopeQueue;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ repeatBlock;
@property (retain, nonatomic) id<IESLiveRevenuePlayPortalPingAPI> pingApi;
@property (retain, nonatomic) id<IESLiveRevenuePlayPortalStatsAPI> statsApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (long long)portalIDFromPortalSenderView;
- (long long)portalIDFromPortalInvitationView;
- (long long)portalIDFromPortalRedEnvelopeView;
- (void)stopReceiverPing;
- (id)filterPortals:(id)a0 forType:(unsigned long long)a1;
- (void)showSenderPortalViewWithPortals:(id)a0;
- (void)subscribeBackEndDataStart;
- (void)removeRewardPortalView;
- (void)removeInvitationView;
- (void)removeSenderPortalView;
- (void)stopPortalStats;
- (void)showSenderPortalViewWithPortals:(id)a0 isMessageSource:(BOOL)a1;
- (void)fetchPortalStats:(id)a0 startWith:(id /* block */)a1 repeatWith:(id /* block */)a2;
- (BOOL)pr_isAnchor;
- (void)showInvitePortalViewWithModel:(id)a0 logNode:(id)a1;
- (void)fetchLatestPortals;
- (id)pr_userID;
- (void)startPingPortal:(id)a0;
- (void)pr_didTapSenderView;
- (void)addPortalView:(id)a0 action:(id /* block */)a1 appearBlock:(id /* block */)a2;
- (void)pr_didTapInviteView:(id)a0;
- (void)pr_setupTimerIfNeeded;
- (void)trackInvitationShowWithModel:(id)a0 from:(id)a1;
- (void)pr_didTapReceiverView;
- (void)showPortalRedEnvelopeView:(id)a0;
- (void)pr_countDownMessages;
- (void)tr_tapPortalViewForEvent:(id)a0 fromSenderID:(id)a1 webcastFromSenderID:(id)a2 fromAnchorID:(id)a3 fromRoomID:(id)a4 fromPortalID:(id)a5 extra:(id)a6;
- (id)webcastFromUserIdKey;
- (void)didReceivePortalMessage:(id)a0;
- (void)updatePortalRedEnvelop:(id)a0;
- (id)getInvitationInfo;
- (id)getRedEnvelopeInfo;
- (void)removeSinglePortalRedEnvelope:(id)a0;
- (void).cxx_destruct;

@end
