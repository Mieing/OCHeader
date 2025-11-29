@class NSArray, NSString, NSDictionary, CJPayHomePagePromotionShowPriorityModel;
@protocol CJPayDyPayPlusXModel;

@interface CJPayBytePayCreditPayMethodModel : CJPayCreditPayMethodModel

@property (nonatomic) long long index;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSArray *voucherMsg;
@property (copy, nonatomic) NSString *payTypeDesc;
@property (copy, nonatomic) NSString *feeDesc;
@property (nonatomic) long long orderSubFixedVoucherAmount;
@property (copy, nonatomic) NSArray<CJPayDyPayPlusXModel> *payAddiItemList;
@property (copy, nonatomic) NSString *passwordPageDescTitle;
@property (copy, nonatomic) NSString *passwordPageDesc;
@property (copy, nonatomic) NSDictionary *voucherShowInfoDic;
@property (retain, nonatomic) CJPayHomePagePromotionShowPriorityModel *homePageShowPriorityModel;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (nonatomic) BOOL hasRetain;
@property (nonatomic) BOOL usePayPlusXData;
@property (nonatomic) BOOL hasChoiceChanged;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getHomePageVoucherShowInfoKey;
- (id)getPlusXData;
- (id)getHomePageVoucherShowInfo;
- (void).cxx_destruct;

@end
