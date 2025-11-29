@class FinderEventBaseResponse, TorchCert, NSString;

@interface AddTorchCertResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (retain, nonatomic) TorchCert *torchCert;
@property (retain, nonatomic) NSString *verifyInfoCert;

+ (void)initialize;

@end
