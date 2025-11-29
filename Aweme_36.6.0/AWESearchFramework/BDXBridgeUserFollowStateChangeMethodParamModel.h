@class NSString;

@interface BDXBridgeUserFollowStateChangeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *sec_user_id;
@property (copy, nonatomic) NSString *follow_str;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
