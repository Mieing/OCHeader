@class BaseRequest, NSString, NSData, MMListenMusicBaseRequest;

@interface MMListenMusicAsrRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *audioBytes;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *clientRequestId;
@property (nonatomic) int type;
@property (nonatomic) int seq;
@property (retain, nonatomic) NSData *musicChatPlayRequestBytes;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) BOOL clientSpecifyFinish;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (nonatomic) int audioType;

+ (void)initialize;

@end
