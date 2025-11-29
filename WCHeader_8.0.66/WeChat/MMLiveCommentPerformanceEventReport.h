@interface MMLiveCommentPerformanceEventReport : NSObject

@property (nonatomic) long long event;
@property (nonatomic) double enterSmooth_LagFrameDuration;
@property (nonatomic) unsigned long long enterSmooth_unnormalMetricsCnt;
@property (nonatomic) double exitSmooth_latestUnLagDuration;
@property (nonatomic) unsigned long long exitSmooth_unnormalMetricsCnt;

+ (id)createDefaultEventReport:(long long)a0;

@end
