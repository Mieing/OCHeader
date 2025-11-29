@interface TTNetInitMetrics : NSObject

@property (nonatomic) struct Time { long long us_; } initTTNetStartTime;
@property (nonatomic) struct TimeTicks { long long us_; } initTTNetStart;
@property (nonatomic) struct TimeTicks { long long us_; } initTTNetEnd;
@property (nonatomic) struct TimeTicks { long long us_; } appStartTime;
@property (nonatomic) struct TimeTicks { long long us_; } mainStart;
@property (nonatomic) struct TimeTicks { long long us_; } initMssdkStart;
@property (nonatomic) struct TimeTicks { long long us_; } initMssdkEnd;
@property (nonatomic) struct TimeTicks { long long us_; } constructAppInfoSubsetStart;
@property (nonatomic) struct TimeTicks { long long us_; } constructAppInfoSubsetEnd;
@property (nonatomic) struct TimeTicks { long long us_; } constructThreadConfigListStart;
@property (nonatomic) struct TimeTicks { long long us_; } constructThreadConfigListEnd;
@property (nonatomic) struct TimeTicks { long long us_; } buildContextConfigStart;
@property (nonatomic) struct TimeTicks { long long us_; } buildContextConfigEnd;
@property (nonatomic) struct TimeTicks { long long us_; } mainEnd;

+ (id)sharedManager;

- (id)constructTTNetInitTimingInfo:(id)a0;
- (id)constructTTNetInitTimingInfoV2:(id)a0;
- (BOOL)initMSSdk;
- (id).cxx_construct;

@end
