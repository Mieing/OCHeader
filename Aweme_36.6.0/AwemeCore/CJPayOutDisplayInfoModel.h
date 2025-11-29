@class NSString;

@interface CJPayOutDisplayInfoModel : JSONModel

@property (copy, nonatomic) NSString *payAndSignCashierStyle;
@property (copy, nonatomic) NSString *serviceDescName;
@property (copy, nonatomic) NSString *serviceDescText;
@property (copy, nonatomic) NSString *realTradeAmount;
@property (copy, nonatomic) NSString *promotionDesc;
@property (copy, nonatomic) NSString *deductMethodSubDesc;
@property (copy, nonatomic) NSString *afterPaySuccessText;
@property (copy, nonatomic) NSString *payTypeText;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *activityInfoDesc;
@property (nonatomic) BOOL bubbleNeedArrow;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isDeductPayMode;
- (long long)obtainSignPayCashierStyle;
- (BOOL)isShowDeductDetailViewMode;
- (void).cxx_destruct;

@end
