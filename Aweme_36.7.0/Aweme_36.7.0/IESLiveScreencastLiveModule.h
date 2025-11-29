@class NSString;

@interface IESLiveScreencastLiveModule : IESLiveModule <IESLiveRoomScreencastService, IESLiveScreencastLiveModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseLive;
- (void)resumeLive;
- (void)stopLive;
- (id)provideServices;
- (void)presentScreenshotStartWithRoom:(id)a0 startExtensionSuccessfulHandler:(id /* block */)a1;
- (void)startedLive;
- (void)stopScreencastLinkWithCompletion:(id /* block */)a0;
- (id)liveStateDidChange;
- (id)screencastLiveRestartInterface;
- (id)streamLifeCycleInterface;
- (id)starGraphInterface;
- (id)guideGameCPService;
- (id)anchorMsgPushInterface;

@end
