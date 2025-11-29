@class BaseRequest, NSData;

@interface BizScanLicenseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int imgType;
@property (retain, nonatomic) NSData *imgBuff;

+ (void)initialize;

@end
