@class HTSLiveInteractOpenAppStatusMessage, HTSEventContext, IESLiveOpenPlatformMessageChannel, IESLiveComponentContext, NSString, IESLiveGameOpenPlatformCommunicationService;
@protocol IESLiveGameOpenPlatformContext, IESLiveRoomService, IESLiveGameOpenPlatformAppInstance;

@interface IESLiveGameOpenPlatformAppManager : NSObject <IESLiveGameOpenPlatformAppManager, IESLiveGameSonicPanelInterface> {
    unsigned long long _launchSource;
}

@property (retain, nonatomic) id<IESLiveGameOpenPlatformContext> openPlatformContext;
@property (retain, nonatomic) HTSLiveInteractOpenAppStatusMessage *appStatusMessage;
@property (retain, nonatomic) IESLiveGameOpenPlatformCommunicationService *communicationService;
@property (retain, nonatomic) IESLiveOpenPlatformMessageChannel *messageChannel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformAppInstance> appInstance;
@property (nonatomic) unsigned long long launchSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (float)getSonicViewHeight;
- (BOOL)isDuringSonicSharingScreen;
- (void)ieslvie_exitXplayGameWithHint:(id)a0 endReason:(id)a1 extraConfimAction:(id /* block */)a2;
- (void)shutDownAppByAudience:(id)a0 reason:(id)a1;
- (void)shutDownApp:(id)a0;
- (void)shutDownApp:(id)a0 reason:(id)a1;
- (void)shutdownAllAppsWithReason:(id)a0;
- (void)shutdownAllAppsWithReason:(id)a0 completion:(id /* block */)a1;
- (void)shutdownAllInteractGames;
- (BOOL)isAppInRunning:(id)a0;
- (BOOL)isInteractGameInRunning;
- (void)bringAppToForeground:(id)a0;
- (void)sendAppToBackground:(id)a0;
- (long long)appShowingTime:(id)a0;
- (id)appInstanceContextWithAppId:(id)a0;
- (id)getAppInstanceWithAppId:(id)a0;
- (void)onReceiveAppStatusMessage:(id)a0;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 eventContext:(id)a2;
- (void)displayAppStatusMessage;
- (void)showInstance:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
