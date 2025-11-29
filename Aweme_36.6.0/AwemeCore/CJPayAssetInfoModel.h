@class CJPayAssetPrimaryShowInfoModel, NSArray, NSString, CJPayAssetBasicShowInfoModel, NSDictionary, CJPayAssetMetaInfoModel, CJPayAssetExtensionShowInfo, CJPayAssetCombinePayInfoModel;
@protocol CJPayAssetInfoModel;

@interface CJPayAssetInfoModel : JSONModel <CJPayDefaultChannelShowConfigBuildProtocol, CJPayRequestParamsProtocol>

@property (retain, nonatomic) CJPayAssetMetaInfoModel *metaInfo;
@property (retain, nonatomic) CJPayAssetBasicShowInfoModel *basicShowInfo;
@property (retain, nonatomic) CJPayAssetPrimaryShowInfoModel *primaryShowInfo;
@property (retain, nonatomic) CJPayAssetExtensionShowInfo *extensionShowInfo;
@property (copy, nonatomic) NSArray<CJPayAssetInfoModel> *subAssetInfoModelList;
@property (retain, nonatomic) CJPayAssetCombinePayInfoModel *combinePayInfo;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, copy, nonatomic) NSString *assetCJIdentity;
@property (readonly, copy, nonatomic) NSDictionary *assetCJIdentityDic;
@property (nonatomic) BOOL assetHasExpandedVoucher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isForeignCard;
- (BOOL)isAssetEnable;
- (id)allSubShowConfigArray;
- (id)buildCombineShowConfigWithSelectedConfig:(id)a0 assetType:(unsigned long long)a1;
- (id)getCombineAssetInfoModelWithAssetIndex:(long long)a0;
- (BOOL)canCombineAsAssetType:(unsigned long long)a0;
- (BOOL)canSelectAsDefault;
- (void)setAssetSelectStatus:(BOOL)a0;
- (id)getAssetInfoModelByAssetCJIdentity:(id)a0;
- (id)buildShowConfig;
- (id)getStandardShowAmountWithType:(id)a0;
- (id)getStandardRecDescWithType:(id)a0;
- (id)getCrossedPriceWithType:(id)a0;
- (id)getSelectionVoucherType;
- (BOOL)selectionVoucherDefaultStatus;
- (unsigned long long)p_getAssetChannelTypeWithPrimaryCategory:(id)a0;
- (id)buildShowConfigWithAssetChannelType:(unsigned long long)a0;
- (id)p_getAssetModelWithAssetModelList:(id)a0 compareBlock:(id /* block */)a1;
- (id)getCombineAssetInfoModelWithAssetIndex:(long long)a0 needDefaultCombineInfo:(BOOL)a1;
- (void)setAssetEnableStatus:(BOOL)a0;
- (id)getDefaultSubAsset;
- (id)getSelectedSubAsset;
- (id)getSelectedSubAssetRecursive;
- (id)getAssetInfoModelByIndex:(int)a0;
- (id)requestNeedParams;
- (id)getAssetInfoModelByFundBillIndex:(id)a0;
- (id)toCombineInfoWithAsset:(id)a0;
- (id)assetCardListVoucherMsgArrayWithType:(unsigned long long)a0;
- (void)disableAssetWithReason:(id)a0;
- (id)getStandardFee;
- (id)getStandardFeeBtnInfoDict;
- (id)getTipsMsgInfoAttrStr;
- (id)buildAnotherCombineShowConfigWithSelectedConfig:(id)a0;
- (BOOL)assetIsExpandVoucher:(id)a0;
- (BOOL)assetIsEqualToAssetInfoModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
