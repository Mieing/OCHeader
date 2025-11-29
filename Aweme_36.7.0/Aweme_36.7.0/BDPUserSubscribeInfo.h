@class NSArray;

@interface BDPUserSubscribeInfo : NSObject

@property (nonatomic) unsigned long long switchStatus;
@property (nonatomic) BOOL feedSwtich;
@property (copy, nonatomic) NSArray *userSubscribeSwitchList;
@property (nonatomic) double lastFetchListTimeStamp;

- (void).cxx_destruct;

@end
