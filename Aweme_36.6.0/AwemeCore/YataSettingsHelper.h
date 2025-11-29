@class NSDictionary;

@interface YataSettingsHelper : YataModule

@property (nonatomic) BOOL eventChainModularization;
@property (nonatomic) long long viewCreateFailedRetryTimes;
@property (retain, nonatomic) NSDictionary *bizExceptionSettingsConfig;
@property (nonatomic) BOOL fixAdjustTargetPathIssue;
@property (nonatomic) BOOL asyncTracker;
@property (nonatomic) BOOL checkEventExecEnv;
@property (retain, nonatomic) NSDictionary *internalTrackerBizParamsConfig;
@property (nonatomic) BOOL useGroupNotifyRefresh;
@property (nonatomic) BOOL adjustDataFieldsMutableCopyStrict;
@property (nonatomic) BOOL frontierConnectOnce;
@property (nonatomic) BOOL alignProtocolIDToSeqNumber;
@property (nonatomic) BOOL protocolClearAndReloadMerge;
@property (nonatomic) BOOL delayRemoveAfterRender;
@property (nonatomic) BOOL fixLinearContainerRemoveSubviews;
@property (nonatomic) BOOL optAfterRenderImpl;
@property (nonatomic) BOOL shouldReuseItem;

+ (BOOL)newWayOfEmptyFieldsJudgment;
+ (void)initialize;

- (id)initWithYataInstance:(id)a0;
- (void).cxx_destruct;

@end
