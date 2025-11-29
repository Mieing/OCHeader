@class NSString, CJPayOutDisplayInfoModel, CJPayPayAgainDisplayInfo, CJPayAssetInfoModel, NSDictionary;

@interface CJPayCashierPageInfoModel : JSONModel

@property (retain, nonatomic) CJPayAssetInfoModel *assetInfoModel;
@property (retain, nonatomic) CJPayOutDisplayInfoModel *outDisplayInfo;
@property (copy, nonatomic) NSString *pwdShowType;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainDisplayInfo;
@property (copy, nonatomic) NSDictionary *collectedAssetExtMap;
@property (copy, nonatomic) NSDictionary *originAssetInfoDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isSuggestCardStyle;
- (id)p_getAssetInfoDictWithAssets:(id)a0 targetFbIndex:(id)a1;
- (id)getDefaultShowConfig;
- (id)searchOriginAssetInfoByFundbillindex:(id)a0;
- (void).cxx_destruct;

@end
