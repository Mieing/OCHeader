@class NSString;

@interface GetEUInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *euProtocolUrl;
@property (nonatomic) unsigned int isAgreeEuProtocol;
@property (retain, nonatomic) NSString *wxpayProtocolUrl;

+ (void)initialize;

@end
