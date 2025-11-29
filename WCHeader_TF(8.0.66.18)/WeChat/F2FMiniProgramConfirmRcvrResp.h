@class NSString, BaseResponse;

@interface F2FMiniProgramConfirmRcvrResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *qrcode;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *distinguishWording;
@property (retain, nonatomic) NSString *rcvrInfo;
@property (retain, nonatomic) NSString *okButtonWording;

+ (void)initialize;

@end
