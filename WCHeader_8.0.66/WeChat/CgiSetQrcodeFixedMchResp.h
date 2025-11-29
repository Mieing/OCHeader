@class NSString, NSData, BaseResponse;

@interface CgiSetQrcodeFixedMchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fee;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) NSData *saveNotifyInfo;

+ (void)initialize;

@end
