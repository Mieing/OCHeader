@class NSString, HTSEventContext, IESLiveMessageChannelApi, IESLiveChatChannelNormalMonitorImpl, IESLiveComponentContext, IESLiveChatChannelLinkmicAudioMixManager, NSNumber;
@protocol IESLiveRoomService, IESLiveChatChannelReaction;

@interface IESLiveChatChannelStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveMessageChannelApi *channelApi;
@property (retain, nonatomic) IESLiveChatChannelNormalMonitorImpl *chatChannelMonitor;
@property (retain, nonatomic) IESLiveChatChannelLinkmicAudioMixManager *audioMixManager;
@property (retain, nonatomic) NSNumber *currentUserInvitedID;
@property (weak, nonatomic) id<IESLiveChatChannelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createChannel;
- (void)didMount;
- (void)willUnmount;
- (void)didUpdateRoom:(id)a0;
- (void)traceChatChannelCommentWithStatusCode:(id)a0 commentType:(id)a1 startTime:(double)a2;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)joinChannelWithInviteID:(id)a0;
- (void)replyAccessChatChannelWithChannelID:(id)a0 secUid:(id)a1 isPermit:(BOOL)a2 completion:(id /* block */)a3;
- (void)quitChatChannelWithChannelID:(id)a0;
- (void)setChatChannelSettingsWithRoomID:(id)a0 channelID:(id)a1 settingModel:(id)a2 completion:(id /* block */)a3;
- (void)fetchWhisperMessagesWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)inviteUserJoinChannel:(id)a0 completion:(id /* block */)a1;
- (void)traceOperationDurationEvent:(id)a0 startTime:(double)a1;
- (void)accessChannelWithChannelInfo:(id)a0 completion:(id /* block */)a1;
- (void)kickOutUser:(id)a0 withChannelID:(id)a1 completion:(id /* block */)a2;
- (void)disbandChannelWithChannelID:(id)a0;
- (void)createChannelWithShareUsers:(id)a0 fromInvite:(BOOL)a1;
- (void)reportInviteUserWithRoomID:(id)a0 channelID:(id)a1 inviteItems:(id)a2 completion:(id /* block */)a3;
- (void)quitChatChannelWithChannelID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
