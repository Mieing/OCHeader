@class CJPayAssetJumpInfoModel, CJPayAssetSelectPageShowInfo, NSDictionary, CJPayFunctionGuidanceMaterial, CJPaySubPayTypeIconTipModel, NSString, CJPayHomePagePromotionShowPriorityModel, CJPayPaymentSelectionMaterial, CJPayHomePageFoldVoucherInfoModel, NSArray, CJPayLoadingStyleInfo, CJPayBubbleInfo, CJPayTypeVoucherMsgV2Model;
@protocol CJPayDyPayPlusXModel, CJPayToastMsgInfo, CJPayUnifyOptionShowInfoModel;

@interface CJPayAssetExtensionShowInfo : JSONModel

@property (retain, nonatomic) CJPayAssetSelectPageShowInfo *selectPageShowInfo;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *buttonTopDesc;
@property (copy, nonatomic) NSDictionary *standardRecDescMap;
@property (copy, nonatomic) NSDictionary *standardShowAmountMap;
@property (copy, nonatomic) NSDictionary *standardRecButtonInfo;
@property (retain, nonatomic) CJPayTypeVoucherMsgV2Model *voucherMsgModel;
@property (copy, nonatomic) NSString *tradeConfirmButtonLabel;
@property (copy, nonatomic) NSString *defaultExpandTradeConfirmButtonLabel;
@property (copy, nonatomic) NSArray<CJPayToastMsgInfo> *toastMsgInfo;
@property (copy, nonatomic) NSString *tradeAreaVoucher;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTips;
@property (nonatomic) BOOL needResign;
@property (nonatomic) BOOL showPayVerifyPreLoading;
@property (retain, nonatomic) CJPayAssetJumpInfoModel *jumpInfo;
@property (retain, nonatomic) CJPayBubbleInfo *bubbleInfoMap;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (copy, nonatomic) NSArray<CJPayUnifyOptionShowInfoModel> *optionShowInfoList;
@property (retain, nonatomic) CJPayFunctionGuidanceMaterial *functionGuidanceMaterial;
@property (retain, nonatomic) CJPayPaymentSelectionMaterial *paymentSelectionMaterial;
@property (copy, nonatomic) NSString *completeTitle;
@property (copy, nonatomic) NSString *hitTipsSubType;
@property (copy, nonatomic) NSDictionary *crossedPriceMap;
@property (copy, nonatomic) NSDictionary *voucherRetainInfoMap;
@property (copy, nonatomic) NSArray<CJPayDyPayPlusXModel> *payAddiItemList;
@property (copy, nonatomic) NSDictionary *recommendVoucherInfo;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *foldVoucherInfo;
@property (retain, nonatomic) CJPayHomePagePromotionShowPriorityModel *homePageShowPriorityModel;
@property (copy, nonatomic) NSDictionary *voucherMsgInfoDic;
@property (nonatomic) BOOL needCustomizedLoadingShow;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
