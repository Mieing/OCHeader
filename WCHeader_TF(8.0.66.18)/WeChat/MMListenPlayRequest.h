@class BaseRequest, NSString, MMListenMusicInfo, MMListenItem, MMListenTTSPlayCtx;

@interface MMListenPlayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenMusicInfo *musicCtx;
@property (nonatomic) BOOL needReplace;
@property (nonatomic) int scene;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL needEncrypt;
@property (retain, nonatomic) MMListenTTSPlayCtx *ttsPlayCtx;

+ (void)initialize;

@end
