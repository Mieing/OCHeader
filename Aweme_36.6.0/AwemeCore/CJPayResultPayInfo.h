@class NSString, CJPayAssetMetaInfoModel;

@interface CJPayResultPayInfo : JSONModel

@property (copy, nonatomic) NSString *typeMark;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *halfScreenDesc;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *colorType;
@property (copy, nonatomic) NSString *payTypeShowName;
@property (retain, nonatomic) CJPayAssetMetaInfoModel *assetMetaInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
