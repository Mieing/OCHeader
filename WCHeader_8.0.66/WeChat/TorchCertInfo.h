@class TorchCert;

@interface TorchCertInfo : WXPBGeneratedMessage

@property (retain, nonatomic) TorchCert *torchCert;
@property (nonatomic) BOOL isLightTorch;
@property (nonatomic) unsigned int fromWxUin;
@property (nonatomic) unsigned long long fromFinderUin;

+ (void)initialize;

@end
