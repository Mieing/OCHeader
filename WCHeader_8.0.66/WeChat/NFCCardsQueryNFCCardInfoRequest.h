@class BaseRequest, NSString, EXTPKG_mmpayapplynfccardbo_DeviceInfo;

@interface NFCCardsQueryNFCCardInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo;
@property (nonatomic) unsigned int actType;

+ (void)initialize;

@end
