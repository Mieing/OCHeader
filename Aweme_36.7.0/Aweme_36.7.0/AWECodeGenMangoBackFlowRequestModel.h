@class NSString, NSDictionary;

@interface AWECodeGenMangoBackFlowRequestModel : NSObject

@property (copy, nonatomic) NSString *shareSecUid;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSDictionary *ext;

- (id)toParamsDict;
- (void).cxx_destruct;

@end
