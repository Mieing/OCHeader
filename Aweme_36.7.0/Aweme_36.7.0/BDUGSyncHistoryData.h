@class NSString;

@interface BDUGSyncHistoryData : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) int topicType;
@property (nonatomic) long long business;
@property (copy, nonatomic) NSString *topic;

- (void).cxx_destruct;
- (id)init;

@end
