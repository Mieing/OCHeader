@class IESECXBridgeEventSubscriber, NSString, NSArray, IESECLiveEnterRoomRequestToast, NSMutableDictionary, NSMutableArray;
@protocol HTSKVStore, IESECLiveDisposable;

@interface IESECLiveEnterRoomRequestWidget : IESECLiveBaseWidget <IESECEnterRoomRequestWidgetAtomicProtocol, IESECLiveShopCartServerAnimationService, IESECLiveEnterRoomRequestService, IESECLiveCartAnimationManager, IESECLiveEnterRoomInfoService, IESECLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) IESECLiveEnterRoomRequestToast *goodsListToast;
@property (retain, nonatomic) NSArray *cartAnimations;
@property (retain, nonatomic) NSMutableDictionary *cartAnimPlayedRecords;
@property (nonatomic) unsigned long long cartAnimCursor;
@property (nonatomic) BOOL isEnterRequestFinished;
@property (nonatomic) BOOL hasEnterRequest;
@property (copy, nonatomic) id /* block */ cartAnimCancelAction;
@property (retain, nonatomic) NSString *ecomLinkMicRoomIDS;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) id<IESECLiveDisposable> disposable;
@property (retain, nonatomic) NSMutableArray *insertCartAnimations;
@property (retain, nonatomic) NSMutableDictionary *messageUpdatedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)calculateExpiredTimestampWithPeriod:(long long)a0 isNaturalTime:(BOOL)a1;
- (id)coreParams;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)registerAtomicBasicAbility;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)endHandleAfterEnterRoom;
- (id)registerMessageClasses;
- (void)insertCartAnimationsWithDatas:(id)a0;
- (void)liveContext:(id)a0 redirectApiPathWithAction:(id)a1 completion:(id /* block */)a2;
- (id)obtainCartAnimation;
- (void)cartAnimationDidPlayedForIdentity:(id)a0;
- (void)cartDidClicked;
- (id)p_getLiveContext;
- (id)getEcomLinkMicRoomIDS;
- (void)p_readCartAnimationPlayedRecord;
- (void)subscribeCustomCartAnimEvent;
- (void)handleEnterRoomRequest;
- (BOOL)showObtainGoodsListToastIfNeeded;
- (void)handleExtraRequestIfNeeded:(id)a0;
- (id)getOutOfTimesRecordString;
- (void)prepareCardAnimation:(id)a0;
- (void)updateEcomRouteRule:(id)a0;
- (void)p_dispose;
- (void)p_writeCartAnimationPlayedRecord;
- (void)insertCartAnimations:(id)a0;
- (id)obtainGoodsListToast;
- (void)goodsListToastDidShowed;
- (BOOL)p_getGoodsListToastShowedForKey:(id)a0;
- (void)p_setGoodsListToastShowed:(BOOL)a0 forKey:(id)a1;
- (id)p_recordKeyWithKey:(id)a0;
- (BOOL)shouldHighHeatMessage:(id)a0;
- (void)didHighHeatMessage:(id)a0;
- (id)getMessageLogicClockKeyWith:(id)a0;
- (void)messageReceived_IESECLiveHighHeatMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
