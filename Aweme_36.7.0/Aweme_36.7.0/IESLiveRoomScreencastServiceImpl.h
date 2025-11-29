@class NSString;

@interface IESLiveRoomScreencastServiceImpl : IESLiveGeneralBaseService <IESLiveRoomScreencastService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)pauseLive;
- (void)resumeLive;
- (void)stopLive;
- (void)presentScreenshotStartWithRoom:(id)a0 startExtensionSuccessfulHandler:(id /* block */)a1;
- (void)startedLive;
- (void)stopScreencastLinkWithCompletion:(id /* block */)a0;
- (id)liveStateDidChange;
- (id)streamLifeCycleInterface;

@end
