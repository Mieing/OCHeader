@class NSString;

@interface CJPayPaymentInfoModel : JSONModel

@property (copy, nonatomic) NSString *deductType;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *cardMaskCode;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) long long deductAmount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
