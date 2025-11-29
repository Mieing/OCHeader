@class NSString, CJPayAssetMetaInfoModel, NSDictionary;

@interface CJPaySubPayTypeRecommendModel : JSONModel

@property (copy, nonatomic) NSString *subPayTypeCode;
@property (copy, nonatomic) NSString *subPayTypeKey;
@property (retain, nonatomic) CJPayAssetMetaInfoModel *metaInfoModel;
@property (copy, nonatomic) NSDictionary *jumpInfo;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *recommendMsg;
@property (copy, nonatomic) NSString *buttonLabel;
@property (copy, nonatomic) NSString *label;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
