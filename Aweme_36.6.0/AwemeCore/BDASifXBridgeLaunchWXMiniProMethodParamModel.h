@class NSString, NSDictionary;

@interface BDASifXBridgeLaunchWXMiniProMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
