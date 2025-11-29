@class NSMutableSet;

@interface AWEIMIncentiveChatScanGroupConvFromDBConfig : NSObject

@property (nonatomic) long long lastSortOrder;
@property (nonatomic) long long queryCount;
@property (retain, nonatomic) NSMutableSet *availableGroupChat;
@property (nonatomic) double scanBeginTime;
@property (nonatomic) double appendTimeInterval;
@property (nonatomic) unsigned long long appendTimes;
@property (nonatomic) unsigned long long appendChatCount;
@property (nonatomic) unsigned long long pageCount;

- (void).cxx_destruct;
- (id)init;

@end
