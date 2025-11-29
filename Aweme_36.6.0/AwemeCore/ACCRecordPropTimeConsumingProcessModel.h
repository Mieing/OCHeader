@interface ACCRecordPropTimeConsumingProcessModel : NSObject

@property (nonatomic) BOOL hasPreRecord;
@property (nonatomic) BOOL hasRecordingStarted;
@property (nonatomic) BOOL hasRecordingEnded;
@property (nonatomic) BOOL hasGeneratingStarted;
@property (nonatomic) BOOL hasGeneratingEnded;
@property (nonatomic) BOOL hasReadyForTransition;
@property (nonatomic) BOOL hasGeneratingFailed;
@property (nonatomic) BOOL hasGeneratingCanceled;
@property (nonatomic) BOOL isInProgress;
@property (nonatomic) BOOL shouldHideUI;
@property (copy, nonatomic) id /* block */ enableTimeConsumingPropIfNeededBlock;
@property (copy, nonatomic) id /* block */ disableTimeConsumingPropBlock;
@property (copy, nonatomic) id /* block */ startShootSourceBlock;
@property (copy, nonatomic) id /* block */ takePictureBlock;
@property (copy, nonatomic) id /* block */ sendStartGeneratingMessageBlock;
@property (copy, nonatomic) id /* block */ sendStartCountdownMessageBlock;
@property (copy, nonatomic) id /* block */ sendResetMessageBlock;
@property (copy, nonatomic) id /* block */ didStartGeneratingBlock;
@property (copy, nonatomic) id /* block */ didFailBlock;
@property (copy, nonatomic) id /* block */ handleOldRecordButtonClickBlock;
@property (nonatomic) BOOL isPropGeneratingEffect;

+ (id)messageOfStartGenerating;
+ (id)messageOfStartTransition;
+ (id)messageOfResetGenerating;
+ (id)messageOfEnableFunctions;
+ (id)messageOfDisableFunctions;

- (void)markHasGeneratingStarted;
- (void)markStartPreVideoRecordState;
- (void)markHasRecordingStarted;
- (void)markHasRecordingEnded;
- (void)markHasGeneratingCanceled;
- (void)markHasGeneratingEnded;
- (void)markHasGeneratingFailed;
- (void)markHasReadyForTransition;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isInInitialState;

@end
