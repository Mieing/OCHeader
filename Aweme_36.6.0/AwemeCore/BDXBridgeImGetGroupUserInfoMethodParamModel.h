@class NSString;

@interface BDXBridgeImGetGroupUserInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
