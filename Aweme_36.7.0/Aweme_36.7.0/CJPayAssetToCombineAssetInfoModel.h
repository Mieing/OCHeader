@class NSString, NSArray, CJPayFunctionGuidanceMaterial, CJPayHomePagePromotionShowPriorityModel, CJPayAssetMetaInfoModel, NSDictionary, CJPayPaymentSelectionMaterial, CJPayHomePageFoldVoucherInfoModel, CJPayTypeVoucherMsgV2Model, CJPayAssetJumpInfoModel;
@protocol CJPayDyPayPlusXModel, CJPayUnifyOptionShowInfoModel;

@interface CJPayAssetToCombineAssetInfoModel : JSONModel

@property (retain, nonatomic) CJPayAssetMetaInfoModel *assetMetaInfo;
@property (nonatomic) long long toCombineAssetIndex;
@property (copy, nonatomic) NSString *toCombineAssetDesc;
@property (copy, nonatomic) NSString *toCombineAssetAmountDesc;
@property (copy, nonatomic) NSDictionary *toCombineAssetAmountMap;
@property (copy, nonatomic) NSDictionary *toCombineAssetAmountDescMap;
@property (copy, nonatomic) NSString *originAssetDesc;
@property (copy, nonatomic) NSString *originAssetAmountDesc;
@property (copy, nonatomic) NSDictionary *originAssetAmountMap;
@property (copy, nonatomic) NSDictionary *originAssetAmountDescMap;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSDictionary *standardRecDescMap;
@property (copy, nonatomic) NSDictionary *standardShowAmountMap;
@property (copy, nonatomic) NSString *tradeConfirmButtonLabel;
@property (copy, nonatomic) NSString *defaultExpandTradeConfirmButtonLabel;
@property (copy, nonatomic) NSString *bannerText;
@property (copy, nonatomic) NSString *buttonTopDesc;
@property (nonatomic) BOOL isDefaultShow;
@property (nonatomic) BOOL btnIsChecked;
@property (nonatomic) BOOL needResign;
@property (retain, nonatomic) CJPayAssetJumpInfoModel *jumpInfo;
@property (retain, nonatomic) CJPayFunctionGuidanceMaterial *functionGuidanceMaterial;
@property (retain, nonatomic) CJPayPaymentSelectionMaterial *paymentSelectionMaterial;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (copy, nonatomic) NSDictionary *crossedPriceMap;
@property (copy, nonatomic) NSArray<CJPayDyPayPlusXModel> *payAddiItemList;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *foldVoucherInfo;
@property (copy, nonatomic) NSDictionary *voucherRetainInfoMap;
@property (retain, nonatomic) CJPayTypeVoucherMsgV2Model *voucherMsgModel;
@property (retain, nonatomic) CJPayHomePagePromotionShowPriorityModel *homePageShowPriorityModel;
@property (copy, nonatomic) NSDictionary *voucherMsgInfoDic;
@property (copy, nonatomic) NSDictionary *recommendVoucherInfo;
@property (copy, nonatomic) NSArray<CJPayUnifyOptionShowInfoModel> *optionShowInfoList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getStandardShowAmountWithType:(id)a0;
- (id)getStandardRecDescWithType:(id)a0;
- (id)getToCombineAssetAmountWithType:(id)a0;
- (id)getOriginAssetAmountWithType:(id)a0;
- (id)getCrossedPriceWithType:(id)a0;
- (id)getSelectionVoucherType;
- (BOOL)selectionVoucherDefaultStatus;
- (void).cxx_destruct;

@end
