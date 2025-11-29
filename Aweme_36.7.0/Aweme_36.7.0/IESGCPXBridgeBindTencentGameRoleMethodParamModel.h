@class NSString, NSNumber;

@interface IESGCPXBridgeBindTencentGameRoleMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) BOOL isAuth;
@property (copy, nonatomic) NSString *scopes;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *commentId;
@property (retain, nonatomic) id roleUpdateTime;
@property (copy, nonatomic) NSString *route;
@property (copy, nonatomic) NSString *commonParams;
@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSString *extraAttr;
@property (retain, nonatomic) NSNumber *singlePlatform;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
