@class BaseRequest, NSString;

@interface OpenECardAuthReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ecardType;
@property (retain, nonatomic) NSString *wxpPasswdEnc;
@property (nonatomic) unsigned int openScene;
@property (retain, nonatomic) NSString *token;

+ (void)initialize;

@end
