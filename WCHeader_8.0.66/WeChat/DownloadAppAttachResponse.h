@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface DownloadAppAttachResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int dataLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;

+ (void)initialize;

@end
