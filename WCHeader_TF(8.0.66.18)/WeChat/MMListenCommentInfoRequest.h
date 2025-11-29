@class BaseRequest, MMListenMusicBaseRequest, NSMutableArray, MMListenAudioBaseRequest;

@interface MMListenCommentInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *listenIds;
@property (retain, nonatomic) NSMutableArray *categoryIds;
@property (nonatomic) int scene;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;

+ (void)initialize;

@end
