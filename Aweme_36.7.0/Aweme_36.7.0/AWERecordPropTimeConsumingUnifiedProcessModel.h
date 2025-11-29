@interface AWERecordPropTimeConsumingUnifiedProcessModel : NSObject

@property (nonatomic) BOOL hasReceivedAIGCLoading;
@property (nonatomic) BOOL hasPreRecord;
@property (nonatomic) BOOL hasReceivedRecordEvent;
@property (nonatomic) BOOL hasRecordingStarted;
@property (nonatomic) BOOL hasRecordingEnded;
@property (nonatomic) BOOL hasGeneratingStarted;
@property (nonatomic) BOOL hasGeneratingEnded;
@property (nonatomic) BOOL hasGeneratingFailed;
@property (nonatomic) BOOL shouldHideUI;
@property (nonatomic) BOOL shouldShowUnifyLoading;
@property (nonatomic) BOOL isInFullSpeedRecord;
@property (copy, nonatomic) id /* block */ sendStartCountdownMessageBlock;
@property (copy, nonatomic) id /* block */ sendStartGeneratingMessageBlock;
@property (copy, nonatomic) id /* block */ sendResetMessageBlock;
@property (copy, nonatomic) id /* block */ didStartGeneratingBlock;
@property (copy, nonatomic) id /* block */ handleGeneratingFailWithoutUnifyLoadingBlock;
@property (copy, nonatomic) id /* block */ startShootSourceBlock;
@property (copy, nonatomic) id /* block */ handleOldRecordButtonClickBlock;
@property (copy, nonatomic) id /* block */ isUnifyLoadingViewShowing;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingViewShowOrHide;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingReviewFailed;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingRequestFailed;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingAIAssetInsufficient;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingViewScrollSubtitle;
@property (copy, nonatomic) id /* block */ handleUnifyLoadingViewHiddenStatus;
@property (copy, nonatomic) id /* block */ handleBackgroundRecordIfNeeded;
@property (copy, nonatomic) id /* block */ handleRestoreFromBackgroundRecordIfNeeded;
@property (copy, nonatomic) id /* block */ handleFullSpeedRecordIfNeeded;
@property (copy, nonatomic) id /* block */ handleRestoreFromFullSpeedRecordIfNeeded;

+ (id)resultModelToDic:(id)a0 needMediaExtra:(BOOL)a1;
+ (id)messageOfAIGCGenerating;
+ (id)messageOfAIGCReset;
+ (id)messageOfAIGCServerResultWithResultModels:(id)a0 respJson:(id)a1 needOutput:(BOOL)a2 needMediaExtra:(BOOL)a3 errorInfo:(id)a4;

- (void)markHasGeneratingStarted;
- (void)markHasRecordingStarted;
- (void)markHasRecordingEnded;
- (void)markHasPreRecord;
- (void)markHasGeneratingEnded;
- (void)markHasGeneratingFailed;
- (void)markHasReceivedAIGCLoading;
- (void)markHasReceivedRecordEvent;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isInInitialState;

@end
