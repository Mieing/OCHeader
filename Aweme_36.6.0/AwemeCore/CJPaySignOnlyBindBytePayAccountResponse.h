@class NSString, CJPaySignOnlyBindBytePayResultDesc;

@interface CJPaySignOnlyBindBytePayAccountResponse : CJPayPassKitBaseResponse

@property (nonatomic) int remainRetryCount;
@property (copy, nonatomic) NSString *remainLockDesc;
@property (copy, nonatomic) NSString *signStatus;
@property (retain, nonatomic) CJPaySignOnlyBindBytePayResultDesc *resultDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
