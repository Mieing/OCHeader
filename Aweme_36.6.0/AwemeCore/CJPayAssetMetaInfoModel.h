@class NSString, NSDictionary;

@interface CJPayAssetMetaInfoModel : JSONModel

@property (copy, nonatomic) NSString *fundBillIndex;
@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetTypeCode;
@property (copy, nonatomic) NSString *instid;
@property (copy, nonatomic) NSString *ext;
@property (readonly, copy, nonatomic) NSString *assetCJIdentity;
@property (readonly, copy, nonatomic) NSDictionary *assetCJIdentityDic;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
