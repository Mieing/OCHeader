@class NSString, NSData, BaseResponse;

@interface GetQRConnectCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appdesc;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSData *qrcodeData;
@property (nonatomic) unsigned int lpTimeout;
@property (nonatomic) unsigned int lpInterval;

+ (void)initialize;

@end
