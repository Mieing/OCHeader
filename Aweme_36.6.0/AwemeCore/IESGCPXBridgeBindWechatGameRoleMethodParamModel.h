@class NSString;

@interface IESGCPXBridgeBindWechatGameRoleMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) BOOL isAuth;
@property (copy, nonatomic) NSString *scopes;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *route;
@property (copy, nonatomic) NSString *commonParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
