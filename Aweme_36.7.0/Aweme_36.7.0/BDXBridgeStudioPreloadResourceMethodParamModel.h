@class NSString, NSNumber;

@interface BDXBridgeStudioPreloadResourceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *cache_key;
@property (retain, nonatomic) NSNumber *file_type;
@property (copy, nonatomic) NSString *shoot_way;
@property (copy, nonatomic) NSString *enter_from;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
