@class BaseRequest, NSString, NSData, NSMutableArray, EXTPKG_mmpayapplynfccardbo_DeviceInfo;

@interface ApplyNFCCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSMutableArray *certificates;
@property (retain, nonatomic) NSData *signNonce;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo;

+ (void)initialize;

@end
