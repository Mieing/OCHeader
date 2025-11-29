@class BaseRequest, NSString, MMListenTTSPlayCtx, MMListenItem, NSData;

@interface MMListenAudioTTSPlayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int startSentenceIndex;
@property (retain, nonatomic) MMListenTTSPlayCtx *ttsPlayCtx;
@property (retain, nonatomic) MMListenItem *listenCtx;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
