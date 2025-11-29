@class NSString;
@protocol RTVSettingsManager, RTVXRRoomActionController, RTVVoipConfigureManagerInterface, RxInjector, RTVVoipManagerInterface, RTVVoipContextManagerInterface;

@interface AWERTVInteractionModuleService : HTSService <HTSService, AWERTVInteractionModuleService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRRoomActionController> actionController;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)aAWEPadModuleAdapter;
- (id)createRemotePlayRecommendFeedDataControllerWithRoomID:(id)a0;
- (void)enqueuePlayRemoteVideoPlayer:(id)a0;
- (id)dequeuePlayRemoteVideoPlayerWithModel:(id)a0;
- (void)showPlayRemoteEntranceWithSourceParam:(id)a0 eventParam:(id)a1 awemeModel:(id)a2;
- (id)remotePlayVCWithContext:(id)a0 audioWrapper:(struct AFDEngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)a1;
- (id)createPlayRemoteAwemeContext;
- (id)remotePlayAwemeModelProcessor;
- (Class)remotePlayResolver;
- (Class)playTogetherShareVideoHelper;
- (void)invokeWithOperation:(id)a0;
- (void)joinWithOperation:(id)a0;
- (id)behaviorOptionsWithDictionary:(id)a0;
- (BOOL)isEffectGameEnable;
- (id)remotePlayFeedTableVC;
- (void)__afterProcessOperation:(id)a0;
- (void)__invokeFeedShareWithOperation:(id)a0;
- (void)__invokeGameWithOperation:(id)a0;
- (id)__enterFromForOperation:(id)a0;
- (BOOL)__effectGameEnableForNoVoipEntrance;
- (id)__tryToJoinFeedShareWithRoomID:(id)a0;
- (void)__shareFeedWithInvokeOperation:(id)a0;
- (void)__invokeFromZeroWithOperation:(id)a0;
- (id)__finishFowardModel:(id)a0;
- (id)__innerFinishForwardModelFromExternModel:(id)a0;
- (id)__invokeSourceWithOperation:(id)a0 enterFrom:(long long)a1;
- (BOOL)__preConditionCheckWithOperation:(id)a0;
- (id)__voipOperationWithInvokeGameOperation:(id)a0;
- (void).cxx_destruct;

@end
