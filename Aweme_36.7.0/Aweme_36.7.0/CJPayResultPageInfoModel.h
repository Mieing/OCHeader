@class CJPayAssets, NSString, NSArray, CJPayRenderInfo, CJPayButtonInfo, CJPayMerchantTips, CJPayVoucherOptions, CJPayPayInfoDesc;
@protocol CJPayPayInfoDesc, CJPayDynamicComponents;

@interface CJPayResultPageInfoModel : JSONModel

@property (retain, nonatomic) CJPayPayInfoDesc *moreShowInfo;
@property (retain, nonatomic) CJPayVoucherOptions *voucherOptions;
@property (retain, nonatomic) CJPayMerchantTips *merchantTips;
@property (retain, nonatomic) CJPayButtonInfo *buttonInfo;
@property (retain, nonatomic) CJPayAssets *assets;
@property (copy, nonatomic) NSArray<CJPayPayInfoDesc> *showInfos;
@property (copy, nonatomic) NSArray<CJPayDynamicComponents> *dynamicComponents;
@property (copy, nonatomic) NSString *dynamicData;
@property (retain, nonatomic) CJPayRenderInfo *renderInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
