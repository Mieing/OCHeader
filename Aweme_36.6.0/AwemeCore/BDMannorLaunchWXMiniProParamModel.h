@class NSString, NSDictionary;

@interface BDMannorLaunchWXMiniProParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSDictionary *wechatMiniappInfo;
@property (copy, nonatomic) NSDictionary *wechatMpInfo;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
