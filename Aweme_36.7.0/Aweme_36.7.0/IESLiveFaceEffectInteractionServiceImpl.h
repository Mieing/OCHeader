@class NSMutableDictionary, NSString, IESLiveGCDTimer, IESEffectModel, NSNumber, IESLiveFaceStickerApi;

@interface IESLiveFaceEffectInteractionServiceImpl : NSObject <IESLiveEffectMessageSubscriber, IESLiveFaceEffectInteractionService>

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

- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)resetStateWithDIContext:(id)a0;
- (void)clearAtStopAnchorLiveWithDIContext:(id)a0;
- (void)startUsingInteractionEffect:(id)a0 inGuidePage:(BOOL)a1 isResume:(BOOL)a2 diContext:(id)a3;
- (void)stopUsingInteractionEffect:(id)a0 inGuidePage:(BOOL)a1 diContext:(id)a2;
- (void)stopInteractionStatusQueryTimer;
- (void)applyInteractionEffect:(BOOL)a0 diContext:(id)a1;
- (void)startInteractionStatusQueryTimerWithDIContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
