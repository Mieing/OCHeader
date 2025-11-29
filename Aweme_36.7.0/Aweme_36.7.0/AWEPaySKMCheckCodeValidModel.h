@class NSString;

@interface AWEPaySKMCheckCodeValidModel : CJPayBaseResponse

@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *codeStatus;
@property (copy, nonatomic) NSString *codeAddressInfo;
@property (copy, nonatomic) NSString *msgHint;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
