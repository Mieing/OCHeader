@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLivePortalReaction;

@interface IESLivePortalStore : NSObject <IESLiveMessageSubscriber, IESLivePortalActions>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLivePortalReaction> reactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(id)a0 componentContext:(id)a1;
- (void)getInviteInfo:(id /* block */)a0;
- (void)getRewardInfo:(id /* block */)a0;
- (void)removePortalRedEnvelopeView:(id)a0;
- (void)startJumpPing;
- (void)monitor_portalMessageWithType:(int)a0 portalID:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
