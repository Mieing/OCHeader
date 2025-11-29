@class IESLiveNormalFaceGiftPlayer, RACDisposable, IESLiveAdornmentFaceGiftPlayer, NSString;
@protocol IESLiveRoomService, IESLiveGiftFullLinkMonitor, IESLiveEffectProcessService;

@interface IESLiveFaceGiftStore : NSObject <IESLiveInteractAction, IESLiveEffectMessageSubscriber, IESLiveEffectRenderListener, IESLiveSocialInteractAction, IESLiveFaceGiftService>

@property (retain, nonatomic) IESLiveNormalFaceGiftPlayer *normalPlayer;
@property (retain, nonatomic) IESLiveAdornmentFaceGiftPlayer *adornmentPlayer;
@property (nonatomic) double ntpDiffTimeMS;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL enableCloseFaceGift;
@property (retain, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (retain, nonatomic) id<IESLiveEffectProcessService> legacyEffectProcessing;
@property (nonatomic) BOOL enableEffectMessagePost;
@property (nonatomic) BOOL fixURLSafe;
@property (nonatomic) BOOL enableGuestEffectMessageSubscribe;
@property (retain, nonatomic) RACDisposable *effectMessageDisposable;
@property (nonatomic) BOOL fixEffectProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)onEffectRenderCallback:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (id)initWithDIContext:(id)a0 room:(id)a1;
- (id)realEffectProcessing;
- (id)convertEffectModelList:(id)a0;
- (id)convertEffectModel:(id)a0;
- (BOOL)injectFaceGiftExternal:(id)a0;
- (BOOL)cancelInjectFaceGiftExternal:(id)a0;
- (void)playFaceGiftWithSticker:(id)a0;
- (BOOL)ablePlayFaceGiftWithModel:(id)a0 giftMsg:(id)a1;
- (BOOL)appendFaceGiftEffectComposer:(id)a0 channel:(id)a1;
- (BOOL)removeFaceGiftEffectComposer:(id)a0 channel:(id)a1;
- (BOOL)sendFaceGiftEffectMessageWithType:(long long)a0 param1:(long long)a1 param2:(long long)a2 param3:(id)a3 channel:(id)a4;
- (void)removeGuestMessageSubscribe;
- (void)p_enqueueWithStricker:(id)a0;
- (void)guestSubscribeEffectMessageIfNeeded:(id)a0;
- (id)chooseMessageHandler:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (void)postNotificationWithEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (id)convertFileURLToLocalPath:(id)a0;
- (long long)convertChannel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_init;

@end
