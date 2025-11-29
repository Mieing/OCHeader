@class WCFinderDataItem, MMLiveQcPoll, OrderedDictionary;

@interface MMLiveQcPollActivityFeed : NSObject

@property (retain, nonatomic) MMLiveQcPoll *poll;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) OrderedDictionary *activities;
@property (nonatomic) unsigned long long exposureUnixEpochTime;

- (id)initWithPoll:(id)a0 dataItem:(id)a1;
- (void)showQuestion:(id)a0;
- (void)markFirstResponseSelectedForQuestion:(id)a0;
- (void)enterResponse:(id)a0 forQuestion:(id)a1;
- (id)createExtStatsFeed;
- (id)exposureExtStatsForActivity:(id)a0 atIndex:(unsigned int)a1 responseTrace:(id)a2;
- (id)invocationExtStatsForActivity:(id)a0 atIndex:(unsigned int)a1 responseTrace:(id)a2;
- (id)pollExposureEndExtStatsWithUnixEpochTime:(unsigned long long)a0 atIndex:(unsigned int)a1 responseTrace:(id)a2;
- (void).cxx_destruct;

@end
