@class BaseRequest, NSString;

@interface QryBankList4BindReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ecardType;
@property (nonatomic) unsigned int openScene;

+ (void)initialize;

@end
