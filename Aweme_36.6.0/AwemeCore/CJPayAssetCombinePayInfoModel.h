@class NSArray, NSString;
@protocol CJPayAssetToCombineAssetInfoModel;

@interface CJPayAssetCombinePayInfoModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayAssetToCombineAssetInfoModel> *assetToCombineAssetInfoList;
@property (copy, nonatomic) NSString *combineFundType;
@property (copy, nonatomic) NSString *selectPageTitle;
@property (nonatomic) long long defaultCombineAssetIndex;
@property (copy, nonatomic) NSString *topRightButtonText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
