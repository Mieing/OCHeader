@class AWEMessageReachComponentModel, NSString, NSArray, NSDictionary, AWEMessageReachRequestParamModel, NSMutableArray;

@interface AWEMessageReachParamContext : AWEMessageReachBussinessParamsModel

@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL fromChannelDelay;
@property (copy, nonatomic) NSString *requestUid;
@property (copy, nonatomic) NSArray *excludeScenes;
@property (copy, nonatomic) NSDictionary *channelParamsDict;
@property (nonatomic) BOOL isFromRetry;
@property (nonatomic) unsigned long long componentStatus;
@property (copy, nonatomic) NSDictionary *delayRequestBubbleData;
@property (nonatomic) unsigned long long lastComponentShowResult;
@property (retain, nonatomic) AWEMessageReachRequestParamModel *originParamModel;
@property (retain, nonatomic) AWEMessageReachComponentModel *firstShowComponentModel;
@property (nonatomic) long long requestCacheTime;
@property (nonatomic) long long triggerRequestTime;
@property (nonatomic) long long startRequestTime;
@property (nonatomic) long long endRequestTime;
@property (nonatomic) long long requestDuration;
@property (nonatomic) long long paramsGetDuration;
@property (nonatomic) long long endDataAnalysisTime;
@property (nonatomic) long long dataAnalysisThreadSwitchingTime;
@property (nonatomic) long long startDataProcessTime;
@property (nonatomic) long long startShowTime;
@property (nonatomic) long long endShowTime;
@property (retain, nonatomic) NSMutableArray *verifyResults;
@property (nonatomic) BOOL useVerifydefualtConfig;
@property (copy, nonatomic) NSDictionary *triggerTrackParams;

+ (id)paramContextClassWithParent:(id)a0;

- (void)clearFirstCallbackBlock:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
