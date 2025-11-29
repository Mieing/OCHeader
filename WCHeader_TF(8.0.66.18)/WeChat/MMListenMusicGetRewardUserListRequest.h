@class BaseRequest, NSString, NSData, MMListenMusicBaseRequest;

@interface MMListenMusicGetRewardUserListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
