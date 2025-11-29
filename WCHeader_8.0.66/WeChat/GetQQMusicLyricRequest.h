@class BaseRequest, SKBuiltinBuffer_t;

@interface GetQQMusicLyricRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int songId;
@property (retain, nonatomic) SKBuiltinBuffer_t *url;
@property (nonatomic) unsigned int isOutsideGfw;
@property (nonatomic) unsigned int shakeMusicGlobalSwitch;

+ (void)initialize;

@end
