@class NSString, NSArray, CJPayVoucherInfoModel, CJPayVoucherRetainInfoModel, CJPayHomePagePromotionShowPriorityModel, NSDictionary, CJPayHomePageFoldVoucherInfoModel, CJPaySecondaryCombinePayInfoModel;
@protocol CJPayDyPayPlusXModel, CJPayAmountAreaModel, CJPayPrimaryCombinePayInfoModel;

@interface CJPayCombinePayInfoModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayPrimaryCombinePayInfoModel> *primaryPayInfoList;
@property (retain, nonatomic) CJPaySecondaryCombinePayInfoModel *secondaryPayInfo;
@property (copy, nonatomic) NSString *selectPageVoucherMsg;
@property (retain, nonatomic) CJPayVoucherInfoModel *combinePayVoucherInfo;
@property (copy, nonatomic) NSArray *combinePayVoucherMsgList;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSString *standardVoucherLabel;
@property (copy, nonatomic) NSArray<CJPayAmountAreaModel> *amountAreaList;
@property (copy, nonatomic) NSString *expandStandardRecDesc;
@property (copy, nonatomic) NSString *expandStandardShowAmount;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfoModel;
@property (copy, nonatomic) NSString *expandVoucherLabel;
@property (retain, nonatomic) CJPayVoucherRetainInfoModel *voucherRetainInfo;
@property (copy, nonatomic) NSString *standardRetainVoucherLabel;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *homePageFoldVoucherInfoModel;
@property (copy, nonatomic) NSDictionary *voucherShowInfoDic;
@property (retain, nonatomic) CJPayHomePagePromotionShowPriorityModel *homePageShowPriorityModel;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSArray<CJPayDyPayPlusXModel> *payAddiItemList;
@property (copy, nonatomic) NSString *rightTopButton;
@property (copy, nonatomic) NSString *combinePayTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getPlusXData;
- (void).cxx_destruct;

@end
