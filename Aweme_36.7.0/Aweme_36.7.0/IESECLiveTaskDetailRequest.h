@class NSString, NSDictionary;

@interface IESECLiveTaskDetailRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)buildParams;
- (void).cxx_destruct;

@end
