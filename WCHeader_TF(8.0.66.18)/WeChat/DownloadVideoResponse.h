@class SKBuiltinBuffer_t, BaseResponse;

@interface DownloadVideoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end
