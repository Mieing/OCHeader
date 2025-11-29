@class NSString, NSNumber, NSArray;

@interface BDXBridgeOpenPlatformUpdateAwemeCacheListMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *container_id;
@property (retain, nonatomic) NSNumber *operation_type;
@property (retain, nonatomic) NSArray *aweme_id_list;
@property (retain, nonatomic) NSArray *awemeList;
@property (nonatomic) long long dataType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
