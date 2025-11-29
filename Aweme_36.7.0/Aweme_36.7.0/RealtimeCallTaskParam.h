@class NSString, ASRParam, TTSParam;

@interface RealtimeCallTaskParam : NSObject

@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *businessInfo;
@property (retain, nonatomic) ASRParam *asrParam;
@property (retain, nonatomic) TTSParam *ttsParam;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *chat;
@property (nonatomic) long long interruptType;
@property (nonatomic) long long businessType;
@property (retain, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSString *trace;
@property (retain, nonatomic) NSString *extra;

- (void)dealloc;

@end
