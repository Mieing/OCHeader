@class NSString, IESLiveInteractiveLinkService;
@protocol IESLiveScreencastLinkerAnchorBuilderDelegate;

@interface IESLiveScreencastLinkerAnchorBuilder : NSObject <IESLiveInteractiveLinkServiceDelegate, IESLiveScreencastLinkerAnchorBuilder>

@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (nonatomic) BOOL isProcessingInvitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveScreencastLinkerAnchorBuilderDelegate> delegate;

- (void)onReceivedLinkCloseMessage:(id)a0;
- (void)onReceivedLinkInviteMessage:(id)a0;
- (void)onReceivedLinkReplyMessage:(id)a0;
- (void)onReceivedLinkCancelInviteMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)onTimeoutWithUid:(id)a0 onInvite:(BOOL)a1;
- (void)reportLogWithEvent:(id)a0 extraHandler:(id /* block */)a1;
- (void)addInteractiveUserWithUser:(id)a0;
- (void)showErrorPromptsWithError:(id)a0;
- (void)interruptLinkProcess;
- (void)removeUserByID:(id)a0 forceOrNot:(BOOL)a1;
- (BOOL)enableHandleInviteMessageWithMessage:(id)a0;
- (void)replyUserWithUserID:(id)a0 secUserID:(id)a1 replyType:(unsigned long long)a2 channelID:(id)a3 completion:(id /* block */)a4;
- (void)showToastWithString:(id)a0;
- (void)inviteToRoomID:(id)a0 inviteUser:(id)a1 listType:(unsigned long long)a2 currentRoomId:(id)a3 completion:(id /* block */)a4;
- (void)cancelInviteWithRoomID:(id)a0 inviteUser:(id)a1 channelID:(id)a2 source:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)joinChannelWithChannelID:(id)a0 completion:(id /* block */)a1;
- (void)leaveChannelWithChannelID:(id)a0 source:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)kickoffUserWithUser:(id)a0 channelID:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
