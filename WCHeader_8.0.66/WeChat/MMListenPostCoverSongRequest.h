@class BaseRequest, MMListenCoverSongPostInfo;

@interface MMListenPostCoverSongRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenCoverSongPostInfo *coverSongPostInfo;

+ (void)initialize;

@end
