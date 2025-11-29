@class BaseRequest, NSString;

@interface MerchantPayGetQRCodeInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrUrl;
@property (retain, nonatomic) NSString *clientIp;
@property (nonatomic) unsigned int scanScene;
@property (nonatomic) unsigned int channel;
@property (retain, nonatomic) NSString *qrcodeSenderUsername;
@property (nonatomic) unsigned long long msgSvrId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int userWalletRegion;

+ (void)initialize;

@end
