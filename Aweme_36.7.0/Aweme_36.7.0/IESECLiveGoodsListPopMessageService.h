@class IESECLiveGoodsListUtilsService, IESECLiveGoodsListHeaderService, NSString, IESECGCDTimer, IESECLiveGoodsListCollectionService;

@interface IESECLiveGoodsListPopMessageService : IESECLiveGoodsListBaseServiceV2 <IESECLiveMessageSubscriber>

@property (weak, nonatomic) IESECLiveGoodsListUtilsService *utilsService;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (weak, nonatomic) IESECLiveGoodsListCollectionService *collectionService;
@property (nonatomic) BOOL isExplainingSameProductRepeatedly;
@property (nonatomic) BOOL isWaitingAfterCancelExplainMsg;
@property (retain, nonatomic) IESECGCDTimer *delayExecuteCancelExplainTimer;
@property (retain, nonatomic) NSString *lastExplainPromotionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageReceived_IESECLivePopMessage:(id)a0;
- (id)introducingGoodsViewModel;
- (id)paramsForBasicTrackParams;
- (void)cancelDelayExecuteCancelExplainTimerIfNeeded;
- (void)trackIntroducingChangeIfNeeded;
- (void)updateListBySwitchIntroducingGoodsWithCompletion:(id /* block */)a0;
- (id)getSmartProductTrackDict;
- (void).cxx_destruct;
- (void)stop;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
