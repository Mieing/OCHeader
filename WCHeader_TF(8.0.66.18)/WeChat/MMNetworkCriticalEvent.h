@class NSDictionary;

@interface MMNetworkCriticalEvent : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long totalWwanUsageInWifi;
@property (nonatomic) unsigned long long totalWwanUsageInWwan;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (retain, nonatomic) NSDictionary *eventInfo;

- (void).cxx_destruct;

@end
