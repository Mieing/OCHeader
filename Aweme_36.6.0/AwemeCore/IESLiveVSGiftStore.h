@class HTSEventContext, HTSLiveEpisode, NSString, IESLiveComponentContext, IESLiveVSGiftListManager, NSCache;
@protocol IESLiveVSSendGiftAPI, IESHYControllerProtocol, IESLiveVSGiftReaction, IESLiveRoomService;

@interface IESLiveVSGiftStore : NSObject <IESLiveVSGiftRouter, IESLiveVSSendGiftCommandExcutor, NSCacheDelegate, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveVSGiftListManager *giftListManager;
@property (retain, nonatomic) id<IESLiveVSSendGiftAPI> sendGiftApi;
@property (retain, nonatomic) NSCache *queueCache;
@property (weak, nonatomic) id<IESHYControllerProtocol> hybridDSAlertView;
@property (weak, nonatomic) id<IESLiveVSGiftReaction> reaction;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveEpisode *itemRoom;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)convergedModule;
- (id)supportGiftWithId:(id)a0;
- (void)showGiftPanelWithGiftID:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2 firstSelectGiftCompletion:(id /* block */)a3;
- (void)showGiftPanelWithPageType:(unsigned long long)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)showGiftPanelWithTrackParams:(id)a0 completion:(id /* block */)a1;
- (id)sendGiftWithGiftID:(id)a0 count:(long long)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (id)checkSupportGift:(id)a0;
- (id)giftWithGiftID:(id)a0;
- (void)hideGiftPanel;
- (void)removeGiftPanel;
- (void)receivedNewGift:(id)a0 completion:(id /* block */)a1;
- (void)registerGiftListUpdatedBlock:(id /* block */)a0;
- (id)currentGiftListModel;
- (id)currentGiftListLogID;
- (void)fetchGiftListFromScene:(long long)a0 completion:(id /* block */)a1;
- (id)sendGiftQueue;
- (void)registerGiftsInfoUpdatedBlock:(id /* block */)a0 shouldSkipFirst:(BOOL)a1;
- (id)currentGiftsInfo;
- (id)supportLiteGiftWithId:(id)a0;
- (void)handleDSAlert:(id)a0;
- (id)initWithContext:(id)a0 trackContext:(id)a1;
- (void)didUpdateVSLiveRoom:(id)a0;
- (void)tr_handleQueueReport:(id)a0;
- (void)p_handleSendError:(id)a0 command:(id)a1;
- (BOOL)p_canExecuteCommand:(id)a0 error:(id *)a1;
- (BOOL)p_hasPlentyDiamand:(unsigned long long)a0;
- (void)p_lackOfDiamond:(long long)a0;
- (id)p_sendParamsFromCommand:(id)a0;
- (void)ts_sendGiftRequestParams:(id)a0 duration:(id)a1 error:(id)a2;
- (void)p_fakeMessage:(id)a0 command:(id)a1 logID:(id)a2 traceID:(id)a3;
- (void)ts_handleSendCommand:(id)a0 error:(id)a1;
- (void)p_updatePublicScreenHeight;
- (id)p_constructVSExtraParam:(id)a0;
- (id)p_constructVSTagsExtraParamStr:(id)a0 command:(id)a1;
- (id)p_otherChannel;
- (BOOL)p_isDouPlusVideo:(id)a0;
- (void)didUpdateVSVideoRoom:(id)a0;
- (void).cxx_destruct;
- (void)executeCommand:(id)a0 completion:(id /* block */)a1;
- (void)messageReceived:(id)a0;

@end
