@class NSString;

@interface AWEPaySKMRefreshCodeModel : CJPayBaseResponse <AWEPayPaymentCodeRequestProtocol>

@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *codeUrl;
@property (copy, nonatomic) NSString *codeToken;
@property (copy, nonatomic) NSString *msgHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
