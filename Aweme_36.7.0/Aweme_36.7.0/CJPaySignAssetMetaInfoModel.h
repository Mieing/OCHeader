@class NSString;

@interface CJPaySignAssetMetaInfoModel : JSONModel

@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetTypeCode;
@property (copy, nonatomic) NSString *assetInstId;
@property (copy, nonatomic) NSString *ext;
@property (readonly, copy, nonatomic) NSString *assetCJIdentity;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
