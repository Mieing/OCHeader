@class NSString, NSData, CheckExternalUrlAntiSpam, BaseResponse;

@interface CheckExternalUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSData *actionBuffer;
@property (retain, nonatomic) NSData *transBuffer;
@property (retain, nonatomic) NSString *transBufferSign;
@property (retain, nonatomic) CheckExternalUrlAntiSpam *antispam;

+ (void)initialize;

@end
