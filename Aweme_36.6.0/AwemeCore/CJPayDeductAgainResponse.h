@class NSString;

@interface CJPayDeductAgainResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *payStatus;
@property (copy, nonatomic) NSString *outTradeNo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
