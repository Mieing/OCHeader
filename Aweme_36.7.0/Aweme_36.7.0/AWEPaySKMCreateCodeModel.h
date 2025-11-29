@class NSString;

@interface AWEPaySKMCreateCodeModel : CJPayBaseResponse <AWEPayPaymentCodeRequestProtocol>

@property (copy, nonatomic) NSString *codeUrl;
@property (copy, nonatomic) NSString *authUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *msgHint;
@property (copy, nonatomic) NSString *retryBtnText;
@property (copy, nonatomic) NSString *amountStr;
@property (nonatomic) BOOL isLocalCache;
@property (nonatomic) long long timeUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
