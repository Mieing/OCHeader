@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeSearchExpandCardWithLoadmoreMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *struct_identifier;
@property (retain, nonatomic) NSNumber *has_more;
@property (copy, nonatomic) NSDictionary *next_page;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
