@class NSString;

@interface AWEPaySKMPayeeInfoModel : CJPayBaseResponse <AWEPayPaymentCodeRequestProtocol>

@property (copy, nonatomic) NSString *codeUserId;
@property (copy, nonatomic) NSString *codeUserType;
@property (copy, nonatomic) NSString *maskName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *remarkName;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *errCode;
@property (copy, nonatomic) NSString *msgHint;
@property (nonatomic) BOOL isPersonalCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isSuccess;

@end
