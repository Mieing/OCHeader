@class BaseRequest, NSData, MMListenAudioBaseRequest, NSMutableArray, MMListenMusicBaseRequest;

@interface MMListenTingReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reportContexts;
@property (retain, nonatomic) NSData *appCtx;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;

+ (void)initialize;

@end
