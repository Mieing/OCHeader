@class NSArray;

@interface AWEMVSelectedBillboardEntranceConfigResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *billboardList;

+ (id)billboardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
