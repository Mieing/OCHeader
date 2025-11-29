@class NSString, BaseResponse;

@interface SendFileUploadMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *fileUploadToken;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
