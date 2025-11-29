@class NSArray;

@interface BDXBridgePoiSelectAssetMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL needSave;
@property (retain, nonatomic) NSArray *materials;
@property (nonatomic) long long selectedTab;

+ (id)materialsJSONTransformer;
+ (id)selectedTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
