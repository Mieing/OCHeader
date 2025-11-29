@class BaseRequest, NSString, NSData, MMListenTTSPlayCtx, MMListenItem;

@interface MMListenAudioGetTTSInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenTTSPlayCtx *ttsPlayCtx;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (nonatomic) unsigned int startPlayIndex;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSString *clientRequestId;

+ (void)initialize;

@end
