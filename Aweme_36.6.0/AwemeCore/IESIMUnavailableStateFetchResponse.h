@class NSDictionary, NSString;

@interface IESIMUnavailableStateFetchResponse : NSObject

@property (readonly, nonatomic) BOOL success;
@property (copy, nonatomic) NSDictionary *awemeMap;
@property (copy, nonatomic) NSDictionary *stateMap;
@property (nonatomic) unsigned long long fromAPI;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *taskId;

- (void)logResponse;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0;

@end
