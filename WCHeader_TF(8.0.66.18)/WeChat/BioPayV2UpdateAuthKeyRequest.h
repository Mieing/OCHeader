@class BaseRequest, NSString;

@interface BioPayV2UpdateAuthKeyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *elementJson;
@property (retain, nonatomic) NSString *payPasswordInRsa;
@property (retain, nonatomic) NSString *elementJsonSignature;
@property (retain, nonatomic) NSString *wcpaysign;
@property (nonatomic) int biometryType;
@property (nonatomic) int openType;

+ (void)initialize;

@end
