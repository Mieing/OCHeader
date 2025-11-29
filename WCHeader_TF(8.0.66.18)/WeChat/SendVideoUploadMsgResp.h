@class NSString, BaseResponse;

@interface SendVideoUploadMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *videoUploadToken;

+ (void)initialize;

@end
