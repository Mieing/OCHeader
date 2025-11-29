@class NSString, HTSLiveAtmosphereEffectMessage, IESEffectModel, IESLiveThreadSafeDictionary, UIView;
@protocol IESLiveEffectProcessService, IESHYContainerProtocol, IESLiveRoomService, IESLiveEffectPlatformService;

@interface IESLiveFloatAssetController : NSObject <IESLiveEffectMessageSubscriber, HTSLiveMessageSubscriber, IESHYHybridViewLifecycleProtocol, IESLiveSocialInteractAction>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) HTSLiveAtmosphereEffectMessage *currentMsg;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *image2Path;
@property (weak, nonatomic) id<IESLiveEffectProcessService> effectProcess;
@property (weak, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL didCreateDir;
@property (nonatomic) BOOL enableFixViewUserInteraction;
@property (nonatomic) BOOL enableUseAnnieCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationChanged:(long long)a0;
- (void)removeEffect;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (BOOL)isAudioRoom;
- (void)applyEffect:(id)a0;
- (void)prepareAssetWithMessage:(id)a0;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)controllerDidActive;
- (void)controllerDidUnActive;
- (void)preDownloadAssetIfNeed;
- (void)subScribeMsgAndAction;
- (void)cleanImgDirAsyncWithCompletion:(id /* block */)a0;
- (id)p_liveLocalImgPath;
- (BOOL)isAudioRoomSupportScenes:(unsigned long long)a0;
- (BOOL)needFilterAtmosphereEffectMsg:(id)a0;
- (void)refreshAssetWithMessage:(id)a0;
- (void)setUpHybridUI;
- (void)trackEffectShowWithMsg:(id)a0;
- (void)handleEffectMsgWithEventTag:(long long)a0 data:(id)a1;
- (void)onImgRequired:(id)a0;
- (void)sendImgWithRequiredUrl2Uri:(id)a0;
- (id)imgPathWithUri:(id)a0;
- (id)baseParamWithMsg:(id)a0;
- (void).cxx_destruct;
- (long long)currentTimestamp;
- (void)messageReceived:(id)a0;

@end
