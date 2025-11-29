@class NSString, NSData, MMListenAudioGetTTSInfoResponse, BaseResponse;

@interface MMListenMusicAsrResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *asrListenId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSString *asrResultText;
@property (retain, nonatomic) NSString *musicChatPlayRequestKey;
@property (nonatomic) int finishSeq;
@property (retain, nonatomic) MMListenAudioGetTTSInfoResponse *getTtsInfoResp;
@property (nonatomic) BOOL hasVadSpeak;

+ (void)initialize;

@end
