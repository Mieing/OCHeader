@class NSArray;

@interface AWEHPLandingSchedulerJumpMonitorConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (nonatomic) long long recordMaxSize;
@property (nonatomic) double recordMaxDuration;
@property (retain, nonatomic) NSArray *conditions;

+ (id)conditionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
