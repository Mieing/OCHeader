@class NSObject, AWEAIGCProcessResultModel, NSString, NSMutableArray, ACCStickerBlockApplyPredicate;
@protocol AWEAIGCAIAssetTaskProtocol;

@interface AWEStickerApplyTimeConsumingPropLoadingUnifyHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL shouldHandlePropMsg;
@property (nonatomic) double trackStartTimeInterval;
@property (nonatomic) double trackTransitionTimeInterval;
@property (nonatomic) double transitionStartTime;
@property (nonatomic) double transitionEndTime;
@property (retain, nonatomic) ACCStickerBlockApplyPredicate *propBlockPredicate;
@property (retain, nonatomic) NSMutableArray *requestPerformers;
@property (retain, nonatomic) AWEAIGCProcessResultModel *failedResultModel;
@property (nonatomic) BOOL hasRequestPrepare;
@property (nonatomic) BOOL hasAIAssetInsufficientError;
@property (nonatomic) long long consumeAssetAmount;
@property (nonatomic) long long arg2;
@property (nonatomic) BOOL needMediaExtra;
@property (retain, nonatomic) NSObject<AWEAIGCAIAssetTaskProtocol> *aiAssetTaskHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessageToEffect:(id)a0;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (id)publishModel;
- (void)startLongConnectionAIAssetTask;
- (void)checkAIAssetWithCompletion:(id /* block */)a0;
- (void)showTaskPanelIfNeededWith:(id)a0 consumeAssetAmount:(long long)a1;
- (void)doTaskForAIAssetNotEnough:(long long)a0;
- (void)sendStartCountdownMessage;
- (void)updateAIAssetNotEnoughUIWith:(BOOL)a0 consumeAssetAmount:(long long)a1;
- (BOOL)checkPropUnavailable:(id)a0;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (void)handlerDidBecomeActive;
- (void)resetTrackTimeInterval;
- (void)sendMessageOfAIGCGenerating;
- (void)sendMessageOfAIGCReset;
- (BOOL)shouldHandleProp:(id)a0;
- (void)setAIGCContextRenderCache:(id)a0;
- (void)handleTimeConsumingPropMessage:(id)a0 arg2:(long long)a1;
- (void)handleMessageOfAIGCStart:(id)a0;
- (void)handleMessageOfAIGCLoading:(id)a0;
- (void)handleMessageOfAIGCRecord:(id)a0;
- (void)handleMessageOfAIGCPreProcessResult:(id)a0 arg2:(long long)a1;
- (void)handleMessageOfAIGCPostProcessResult:(id)a0;
- (void)handleMessageOfAIGCEnd:(id)a0;
- (void)updateLoadingViewHiddenStatus:(BOOL)a0;
- (void)sendMessageOfAIGCServerResultWith:(id)a0 arg2:(long long)a1 needOutput:(BOOL)a2 needMediaExtra:(BOOL)a3;
- (void)handleMessageOfAIGCPreProcessResultAfterAIAssetCheckPassed:(id)a0 arg2:(long long)a1;
- (void)trackUploadPropContentFinishWithTrigger:(id)a0;
- (void)saveEffectExtraIfNeeded:(id)a0;
- (void)saveAigcMetaIfNeeded:(id)a0;
- (BOOL)shouldNotBlockProp:(id)a0;
- (void).cxx_destruct;
- (void)resetData;

@end
