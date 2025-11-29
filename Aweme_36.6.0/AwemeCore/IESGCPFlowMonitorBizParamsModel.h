@class NSString, NSDictionary;

@interface IESGCPFlowMonitorBizParamsModel : NSObject

@property (copy, nonatomic) NSString *jumpReason;
@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *promoteScene;
@property (copy, nonatomic) NSDictionary *promoteSceneSub;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSDictionary *trafficExtra;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSDictionary *route;
@property (copy, nonatomic) NSDictionary *location;
@property (copy, nonatomic) NSDictionary *otherBizParams;

- (void).cxx_destruct;

@end
