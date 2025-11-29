@class NSArray, AWECodeGenCommonAnchorBasicInfoModel;

@interface AWECodeGenCommonAnchorModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCommonAnchorBasicInfoModel *basicInfoModel;
@property (copy, nonatomic) NSArray *anchorSceneInfoListModelArray;
@property (nonatomic) BOOL onlyUseCommonAnchorStruct;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLogExtraDict:(id)a0;
- (id)logExtraDict;
- (id)poiInfo;
- (id)localLifeAnchorInfo;
- (void)updatePoiInfo:(id)a0;
- (id)basicLogExtraDict;
- (void).cxx_destruct;

@end
