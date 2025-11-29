@class NSString, BaseResponse;

@interface WABizF2FRequestPaymentResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *rcvrInfo;
@property (nonatomic) unsigned long long totalAmount;
@property (retain, nonatomic) NSString *okButtonWording;

+ (void)initialize;

@end
