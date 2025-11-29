@class NSString, NSMutableDictionary;
@protocol IESLivePiperProtocol, IESLiveRoomService;

@interface IESLiveSendPropsGiftPiperHandler : NSObject <HTSLiveMessageSubscriber, HTSLiveSendGiftActions, IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) NSMutableDictionary *identifierToComboCount;
@property (retain, nonatomic) NSMutableDictionary *identifierToTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;

- (void)didSetAttachingDIContext;
- (void)didGiveGiftWithResponse:(id)a0;
- (void)registerHandlerWithBridge:(id)a0;
- (BOOL)p_isVSRoom;
- (id)getStringFromObj:(id)a0;
- (BOOL)p_shouldSkipDiamondCheck;
- (void)showChargePanelWithTargetDiamond:(long long)a0;
- (id /* block */)sendPropsCallHandler;
- (id /* block */)sendGiftCallHandler;
- (void)sendGiftWithResult:(id)a0 source:(id)a1 callback:(id /* block */)a2;
- (void)p_sendGiftInNormalRoomWithGift:(id)a0 seriesInfo:(id)a1 result:(id)a2 interceptTracker:(id)a3 callback:(id /* block */)a4;
- (void)p_bindPrimaryEffectIfNeedWithGift:(id)a0;
- (long long)p_showRedeemFromTypeFromGiftSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
