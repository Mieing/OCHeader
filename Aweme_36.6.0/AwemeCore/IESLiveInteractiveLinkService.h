@class IESLiveInteractiveLinkMulticastDelegate, IESLiveInterativeTimeOutManager, NSTimer, IESLiveInteractiveLinkConfig, NSString, IESLiveInteractiveLinkMonitor, HTSLiveLinkMessage;
@protocol IESLiveInteractiveLinkAPI;

@interface IESLiveInteractiveLinkService : NSObject <IESLiveInterativeTimeOutDelegate, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveInteractiveLinkMulticastDelegate *delegate;
@property (retain, nonatomic) id<IESLiveInteractiveLinkAPI> linkAPI;
@property (retain, nonatomic) IESLiveInteractiveLinkMonitor *monitor;
@property (retain, nonatomic) IESLiveInterativeTimeOutManager *timeOutManager;
@property (retain, nonatomic) HTSLiveLinkMessage *linkedListChangeMessage;
@property (retain, nonatomic) NSTimer *listChangeTimer;
@property (nonatomic) BOOL disableDescription;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) IESLiveInteractiveLinkConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 config:(id)a1;
- (void)registMessage;
- (void)inviteUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)cancelInviteUser:(id)a0 secUserID:(id)a1 source:(unsigned long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)replyUser:(id)a0 secUserID:(id)a1 type:(unsigned long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)joinChannel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)leaveChannel:(id)a0 source:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)kickoutUser:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)replySwitchChannel:(unsigned long long)a0 extraParams:(id)a1 fromAnchorID:(id)a2 fromRoomID:(id)a3 toJoinChannelID:(id)a4 completion:(id /* block */)a5;
- (void)permitUser:(id)a0 type:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)applyChannel:(id)a0 toUser:(id)a1 toSecUserID:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)cancelApplyChannel:(id)a0 toUser:(id)a1 toSecUserID:(id)a2 source:(unsigned long long)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (void)inviteSwitchChannel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)switchChannelID:(id)a0 toScene:(unsigned long long)a1 toPlayMode:(int)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)cancelSwitchChannel:(id)a0 completion:(id /* block */)a1;
- (void)turnOffChannel:(id)a0 source:(unsigned long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)handlerLinkMicMethod:(id)a0;
- (void)handleLinkMessage:(id)a0;
- (void)handleSignalMessage:(id)a0;
- (void)handleSettingChangeMessage:(id)a0;
- (void)handleLinkMicPositionMessage:(id)a0;
- (BOOL)isValidByScene:(unsigned long long)a0;
- (BOOL)isVaildByLayout:(unsigned long long)a0;
- (BOOL)isValidByFallbackScene:(unsigned long long)a0;
- (void)appendUserRoleType:(id)a0 extraDic:(id)a1;
- (void)compresslinkedUsersArray:(id)a0;
- (void)invalidateListChangeTimer;
- (id)monitorExtraFromDeleagtes;
- (id)monitorExtraMessageFromDelegates:(id)a0;
- (id)monitorPathWith:(id)a0;
- (id)monitorExtraResponseFromDelegates:(id)a0;
- (id)monitorExtraFromDelegates:(id)a0 withParams:(id)a1;
- (void)timeOutWithUid:(id)a0 onInvite:(BOOL)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
