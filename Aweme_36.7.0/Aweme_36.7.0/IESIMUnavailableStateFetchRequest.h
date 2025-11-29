@class NSArray, NSString;

@interface IESIMUnavailableStateFetchRequest : NSObject

@property (copy, nonatomic) NSArray *fullInfoAwemeIds;
@property (copy, nonatomic) NSArray *filteredAwemeIds;
@property (copy, nonatomic) NSString *requestSource;
@property (nonatomic) unsigned long long originType;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) unsigned long long fromAPI;

- (void)logRequest;
- (void).cxx_destruct;

@end
