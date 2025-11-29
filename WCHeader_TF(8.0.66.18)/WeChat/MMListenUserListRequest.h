@class BaseRequest, NSString, NSData, MMListenMusicBaseRequest, MMListenAudioBaseRequest;

@interface MMListenUserListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int userListType;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
