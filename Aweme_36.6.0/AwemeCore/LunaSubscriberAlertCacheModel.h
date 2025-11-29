@class NSString;

@interface LunaSubscriberAlertCacheModel : MTLModel

@property (nonatomic) double lastShowTime;
@property (nonatomic) long long showCount;
@property (retain, nonatomic) NSString *day;

- (void).cxx_destruct;

@end
