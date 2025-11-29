@class NSString, BDUGLuckyCounterTimerConfig, NSDictionary, BDUGLuckyCounterPendentConfig;

@interface BDUGLuckyCounterTaskInfoModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *counterUniqueKey;
@property (nonatomic) BOOL expireState;
@property (nonatomic) double expireAt;
@property (nonatomic) long long targetCount;
@property (nonatomic) long long ackedCount;
@property (nonatomic) BOOL reachTarget;
@property (copy, nonatomic) NSString *countActionType;
@property (retain, nonatomic) BDUGLuckyCounterTimerConfig *countTimerConfig;
@property (retain, nonatomic) BDUGLuckyCounterPendentConfig *countPendantConfig;
@property (copy, nonatomic) NSDictionary *clientExtra;
@property (copy, nonatomic) NSString *taskTag;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;

@end
