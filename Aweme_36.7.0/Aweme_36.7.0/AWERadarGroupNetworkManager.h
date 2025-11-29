@class NSMutableDictionary, NSTimer, NSDictionary, NSArray;

@interface AWERadarGroupNetworkManager : NSObject

@property (retain, nonatomic) NSTimer *timerGroup;
@property (nonatomic) BOOL isHeartBeatGroup;
@property (nonatomic) BOOL isHeartBeatRequestOnAirGroup;
@property (nonatomic) BOOL isVerifyRequestOnAir;
@property (nonatomic) BOOL isEnterRequestOnAir;
@property (nonatomic) double heartBeatFrequencyGroup;
@property (copy, nonatomic) NSDictionary *heartBeatParams;
@property (copy, nonatomic) id /* block */ completionGroup;
@property (nonatomic) BOOL shouldCountWhenCompleteLastRequest;
@property (retain, nonatomic) NSMutableDictionary *requestInfoParams;
@property (retain, nonatomic) NSMutableDictionary *requestErrorInfoParams;
@property (nonatomic) BOOL isNeedErrorMsg;
@property (nonatomic) BOOL isGroupDataEmpty;
@property (nonatomic) unsigned long long strategyType;
@property (copy, nonatomic) NSArray *noticeList;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)p_stopTimer;
- (void)p_startTimer;
- (void)requestVerifyGroupCommandWithParams:(id)a0 completion:(id /* block */)a1;
- (void)initEmptyGroupDataFlag;
- (void)stopGroupHeartBeat;
- (void)startGroupHeartBeatWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestExitRadarGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (void)trackEmptyGroupDataFlag;
- (void)requestEnterRadarGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (void)initGroupParams;
- (void)p_clearRequestCount;
- (void)p_logRequestHeartBeatWithiCompletion:(id)a0;
- (void)p_addRequestCount:(id)a0;
- (void)p_requestGroupWithAPIUrl:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)p_heartBeat;
- (void)requestHeartBeatWithiCompletion:(id /* block */)a0;
- (void)errorLogs:(id)a0 andUrl:(id)a1 andRequestID:(id)a2;
- (void)p_checkIsErrorGroupInfo:(id)a0 response:(id)a1 error:(id)a2;
- (void)p_getGroupLocation:(id)a0 completion:(id /* block */)a1;
- (void)p_trackRequestErrorInfo:(id)a0;
- (void)p_clientError:(id)a0 urlType:(id)a1;
- (void)p_addRequestErrorCount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNetworkError:(id)a0;

@end
