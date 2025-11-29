@class NSString, HTSLiveApi, IESLiveCombineSubject, NSNumber;
@protocol IESLiveInteractionLinkerLinkService, IESLiveUserService, IESLiveSocialInteractiveRouter, IESLiveCompoundSubscription, IESLiveInteractionLinkerMediaService;

@interface IESLiveInteractStatusRemoteControlComponent : IESLiveInteractComponentBase <IESLiveInteractionRTSMessageDispatcher, IESLiveInteractVideoCaptureAction>

@property (retain, nonatomic) HTSLiveApi *API;
@property (weak, nonatomic) id<IESLiveInteractionLinkerMediaService> linkerMediaService;
@property (weak, nonatomic) id<IESLiveInteractionLinkerLinkService> linkerLinkService;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialRouter;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) IESLiveCombineSubject *externalSelfSilenceStatusSignal;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> externalSelfSilenceStatusSignalDisposable;
@property (retain, nonatomic) NSNumber *waitingExternalSelfSilenceStatusSignalType;
@property (nonatomic) BOOL disableSessionAndUserListCheckInPartyKTV;
@property (nonatomic) BOOL disableRTSInPartyKTV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)didUpdateServerLinkTypeSucceed:(int)a0 actively:(BOOL)a1;
- (void)didReceiveRTSMessage:(id)a0 fromUID:(id)a1 isBroadcastMessage:(BOOL)a2;
- (void)didReceiveRTSBinaryMessage:(id)a0 fromUID:(id)a1 isBroadcastMessage:(BOOL)a2;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void).cxx_destruct;

@end
