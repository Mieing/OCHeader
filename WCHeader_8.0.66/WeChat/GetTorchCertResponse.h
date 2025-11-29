@class FinderEventBaseResponse, TorchCert, NSString;

@interface GetTorchCertResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (retain, nonatomic) TorchCert *torchCert;
@property (retain, nonatomic) NSString *verifyInfoCert;

+ (void)initialize;

@end
