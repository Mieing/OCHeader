@class CJPaySignAssetMetaInfoModel, CJPaySignAssetShowInfoModel;

@interface CJPaySignAssetInfoModel : JSONModel

@property (retain, nonatomic) CJPaySignAssetMetaInfoModel *metaInfoModel;
@property (retain, nonatomic) CJPaySignAssetShowInfoModel *showInfoModel;
@property (readonly, nonatomic) BOOL enable;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)keyMapperDict;

- (id)assetCJIdentity;
- (id)getMethodInfoTrackerDic;
- (BOOL)assetIsNewCard;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
