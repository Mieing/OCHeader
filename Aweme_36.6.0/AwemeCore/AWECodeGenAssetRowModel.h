@class NSString, NSArray;

@interface AWECodeGenAssetRowModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *assetgroupsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
