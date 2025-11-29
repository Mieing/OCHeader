@class UIView, NSString, HTSEventContext, AWELiveCommercialLotteryAPI, AWEOriginalAdModel, IESLiveShortTouchItem, NSObject, AWECommerceLiveComponentModel, AWELiveCommercialLotteryFloatingView, AWELiveCommercialLotteryResultResponseModel;
@protocol IESLiveInternalRouter, IESLiveHybridContainerWrapperProtocol, AWECommerceLiveComponentsManager, IESLiveBubbleGuide, IESLiveRoomService, IESLiveURLSchemaHandler;

@interface AWELiveCommercialLotteryComponent : NSObject <IESLiveCommercialComponentsActions, AWEPublishTaskMessage>

@property (retain, nonatomic) AWECommerceLiveComponentModel *lotteryModel;
@property (retain, nonatomic) AWEOriginalAdModel *adInfo;
@property (retain, nonatomic) AWELiveCommercialLotteryFloatingView *floatingView;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *duetPublishProgressTipView;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (weak, nonatomic) id<IESLiveHybridContainerWrapperProtocol> currentPopUpLynx;
@property (retain, nonatomic) IESLiveShortTouchItem *lotteryItem;
@property (retain, nonatomic) AWELiveCommercialLotteryAPI *lotteryAPI;
@property (copy, nonatomic) NSString *resourceDirPath;
@property (retain, nonatomic) AWELiveCommercialLotteryResultResponseModel *lotteryResultResponseModel;
@property (copy, nonatomic) id /* block */ handleResourceDownloadCompletionBlock;
@property (copy, nonatomic) NSString *latestPublishProgressTip;
@property (nonatomic) BOOL isResourcesDownloading;
@property (nonatomic) BOOL enableMonitorMsgForLynxView;
@property (nonatomic) BOOL enableSendCloseMsgToLynxView;
@property (nonatomic) long long fetchResultCount;
@property (nonatomic) BOOL shouldShowLotteryEndToast;
@property (nonatomic) BOOL isPublishingDuet;
@property (retain, nonatomic) id<IESLiveRoomService> roomInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) NSObject<AWECommerceLiveComponentsManager> *componentsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (id)trackParams;
- (void)didSetAttachingDIContext;
- (void)handleOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)sendEventToLynxContainer:(id)a0 params:(id)a1;
- (void)configWithComponentModel:(id)a0;
- (id)fetchLotteryResultInfo;
- (void)fetchMaterialLocalPathInfoWithCompletionBlock:(id /* block */)a0;
- (void)enableMonitorMessageForLynxView:(BOOL)a0;
- (void)enableSendCloseEventToLynxView;
- (void)fetchCommercialLotteryEventParams:(id /* block */)a0;
- (id)getComponentsWithURLString:(id)a0;
- (void)updateRoom:(id)a0 trackContext:(id)a1;
- (void)handleMessageReceived:(id)a0;
- (void)updateEntranceIfNeeded;
- (void)showLotteryFloatingView;
- (void)checkToShowLotteryResult;
- (void)lotteryFloatingViewClicked;
- (void)prefetchDuetResourcesIfNeeded;
- (void)handleCandidateCountMsgWithParams:(id)a0;
- (void)showPublishProgressTip:(id)a0;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void)fetchLotteryResult;
- (void)resetLotteryInfo;
- (BOOL)isDuetTask:(id)a0;
- (BOOL)checkToShowLotteryEndedToast;
- (void)uploadParticipateStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)trackEventWithName:(id)a0;

@end
