@class NSString, IESECSKUStashedEventsHandler, NSMutableDictionary;
@protocol IESECBaseSKUEventsDelegate, IESECSKUViewDelegate;

@interface IESECBaseSKUEventsImpl : NSObject <IESECMediaPreviewDelegate>

@property (weak, nonatomic) id<IESECSKUViewDelegate> delegate;
@property (weak, nonatomic) id<IESECBaseSKUEventsDelegate> eventHandler;
@property (retain, nonatomic) IESECSKUStashedEventsHandler *stashedEventsHandler;
@property (retain, nonatomic) NSMutableDictionary *previewBigPicInfo;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)openSchemaWithParams:(id)a0;
+ (id)picSpecStateFromSpecsStateMap:(id)a0;
+ (id)URLStrFromMegaURLStr:(id)a0;

- (void)selfOpenSkuSchemaWithEventData:(id)a0;
- (void)detailEntranceDidTap;
- (void)mediaPreviewTrackWithEventName:(id)a0 andParams:(id)a1 btmID:(id)a2;
- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didShowIndex:(long long)a1;
- (BOOL)shouldClosePanelWithCloseType:(long long)a0;
- (id)skuView;
- (id)yataInstanceObj;
- (void)setupHybridEventSubscriber;
- (id)eventTrackerHandler;
- (id)skuContext;
- (BOOL)quitSKUPageWithCloseType:(long long)a0;
- (id)eventFieldsFromEventData:(id)a0;
- (void)p_stashEvent:(id)a0;
- (id)uplinkController;
- (id)globalDataFromEventData:(id)a0;
- (id)nodeFieldsFromEventData:(id)a0;
- (BOOL)p_currentUsingCache;
- (void)p_handleSelectionStateWithGlobalData:(id)a0 specsNodeFields:(id)a1 nextEventName:(id)a2 renderObject:(id)a3 activeView:(id)a4 layoutOptimize:(BOOL)a5;
- (void)p_sendOpenCouponEvent:(id)a0;
- (void)p_anchorSpecPicItemWithIndex:(long long)a0 delayAction:(BOOL)a1;
- (id)initWithDelegate:(id)a0 eventHandler:(id)a1;
- (void)reloadSKUByLiveRoomMessage;
- (void)selfAppendParamsToSchemaWithEventData:(id)a0;
- (void)selfUpdateLocalCommonEventParamsWithEventData:(id)a0;
- (void)selfPollQueueEventsWithEventData:(id)a0;
- (void)selfDelayWithEventData:(id)a0;
- (void)selfPreviewImgWithEventData:(id)a0;
- (void)selfScrollToViewWithEventData:(id)a0;
- (void)selfToastWithEventData:(id)a0;
- (void)selfHandleEventWhenAppearWithEventData:(id)a0;
- (void)selfUpdateSkipTriggersWithEventData:(id)a0;
- (void)selfSaveBizFieldsWithEventData:(id)a0;
- (void)selfDoNothingWithEventData:(id)a0;
- (void)selfCalCurSkuIdToUpdateWithEventData:(id)a0;
- (void)selfSaveSpecShowModeWithEventData:(id)a0;
- (void)selfAddCurVersionWithEventData:(id)a0;
- (void)selfChangeBuyNumWithEventData:(id)a0;
- (void)selfOpenCouponWithEventData:(id)a0;
- (void)selfOpenDetailWithEventData:(id)a0;
- (void)selfUpdateStatusInfoWithEventData:(id)a0;
- (void)selfUpdateCommonEventParamsWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)dataDelegate;

@end
