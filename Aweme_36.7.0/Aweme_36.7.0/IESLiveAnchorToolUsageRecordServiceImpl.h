@class NSString, NSMutableDictionary;

@interface IESLiveAnchorToolUsageRecordServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorToolUsageRecordService>

@property (retain, nonatomic) NSMutableDictionary *runningTools;
@property (nonatomic) long long reportMinimumTimeGap;
@property (nonatomic) long long reportMaximumTryCounts;
@property (nonatomic) double latestChangeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)startUseTool:(id)a0;
- (void)endUseTool:(id)a0;
- (void)reportCurrentUsingTools;
- (id)toolInfoToDictionary:(id)a0;
- (void)reportCurrentUsingToolsWithRetryCount:(long long)a0;
- (id)jsonStringOfRunningTools;
- (void).cxx_destruct;

@end
