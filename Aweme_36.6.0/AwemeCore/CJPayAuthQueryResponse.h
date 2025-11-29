@class CJPayAuthAgreementContentModel, NSString;

@interface CJPayAuthQueryResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayAuthAgreementContentModel *agreementContentModel;
@property (nonatomic) long long isAuthorize;
@property (nonatomic) long long isAuth;
@property (copy, nonatomic) NSString *authUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
