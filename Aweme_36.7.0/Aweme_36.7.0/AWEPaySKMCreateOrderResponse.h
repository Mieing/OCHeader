@class NSString;

@interface AWEPaySKMCreateOrderResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *prePayInfo;
@property (copy, nonatomic) NSString *payMode;
@property (copy, nonatomic) NSString *codeUrl;
@property (copy, nonatomic) NSString *codeToken;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyToken;
@property (copy, nonatomic) NSString *authUrl;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *msgHint;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
