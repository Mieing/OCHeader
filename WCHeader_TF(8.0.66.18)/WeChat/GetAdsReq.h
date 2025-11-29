@class BaseRequest, NSString, NSData;

@interface GetAdsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *commonDeviceId;
@property (retain, nonatomic) NSString *commonDeviceInfo;
@property (retain, nonatomic) NSData *posId;

+ (void)initialize;

@end
