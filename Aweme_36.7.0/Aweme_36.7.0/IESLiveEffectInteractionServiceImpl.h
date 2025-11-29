@class NSDictionary, NSMutableDictionary, NSString, IESLiveGCDTimer, IESEffectModel, NSNumber, IESLiveFaceStickerApi;

@interface IESLiveEffectInteractionServiceImpl : IESLiveGeneralBaseService <IESLiveEffectMessageSubscriber, HTSLiveMessageSubscriber, IESLiveEffectInteractionService, IESLiveAnchorEffectBaseEvent>

@property (retain, nonatomic) IESLiveFaceStickerApi *api;
@property (nonatomic) double queryInterval;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) NSMutableDictionary *interactionInfoCache;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *anchorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *interationDataCache;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)onEffectRenderWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectRemoveWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)onEffectConflictResumeWithEffect:(id)a0 item:(id)a1 extra:(id)a2;
- (void)handleEffectInterationMessage:(id)a0;
- (void)restoreInterationEffectStatus:(id)a0;
- (void)insertInterationEffectTeaLog:(id)a0 insertDict:(id)a1;
- (void)startUsingInteractionEffect:(id)a0 inGuidePage:(BOOL)a1 isResume:(BOOL)a2;
- (BOOL)isInGuidePage;
- (void)refreshEffectInterationDataCache;
- (void)stopUsingInteractionEffect:(id)a0 inGuidePage:(BOOL)a1;
- (BOOL)isInteractionEffect:(id)a0;
- (void)applyInteractionEffect:(BOOL)a0;
- (void)startInteractionStatusQueryTimer;
- (void)stopInteractionStatusQueryTimer;
- (void)trackInterationEffectUpgrade:(id)a0;
- (void)updateInterationEffectData:(id)a0 effectId:(id)a1;
- (void).cxx_destruct;
- (void)clearState;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
