@class NSNumber, NSString, NSArray;

@interface BDXBridgeSearchSyncAwemeListMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *syncType;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
