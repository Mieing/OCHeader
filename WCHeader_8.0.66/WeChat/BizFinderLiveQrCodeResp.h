@class NSString, BaseResponse;

@interface BizFinderLiveQrCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL verifyOk;
@property (nonatomic) unsigned int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
