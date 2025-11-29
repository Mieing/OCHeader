@class NSString;

@interface CJPayQueryPayOrderInfoResponse : CJPayQueryLoginInfoResponse

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *payeeExplanation;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (long long)resultStatus;

@end
