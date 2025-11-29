@class NSString;

@interface CJPayDyPayPromotionActivity : JSONModel

@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *prizeDesc;
@property (copy, nonatomic) NSString *voucherWorth;
@property (copy, nonatomic) NSString *voucherMeasure;
@property (copy, nonatomic) NSString *voucherType;
@property (copy, nonatomic) NSString *leftMsgDesc;
@property (copy, nonatomic) NSString *voucherLeftDesc;
@property (copy, nonatomic) NSString *voucherBgTypeStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
