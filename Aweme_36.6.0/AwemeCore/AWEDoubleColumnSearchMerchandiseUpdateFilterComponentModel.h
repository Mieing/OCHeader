@class NSArray, AWEDoubleColumnSearchMerchandiseFilterComponentModel;

@interface AWEDoubleColumnSearchMerchandiseUpdateFilterComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *path;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *render;

+ (id)renderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
