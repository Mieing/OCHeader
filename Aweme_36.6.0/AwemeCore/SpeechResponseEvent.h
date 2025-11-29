@class NSString;

@interface SpeechResponseEvent : NSObject

@property (class, readonly, nonatomic) NSString *TaskStarted;
@property (class, readonly, nonatomic) NSString *TaskFinished;
@property (class, readonly, nonatomic) NSString *TaskFailed;
@property (class, readonly, nonatomic) NSString *SessionStarted;
@property (class, readonly, nonatomic) NSString *SessionFinished;
@property (class, readonly, nonatomic) NSString *SessionCanceled;
@property (class, readonly, nonatomic) NSString *SessionFailed;
@property (class, readonly, nonatomic) NSString *ASRResponse;
@property (class, readonly, nonatomic) NSString *ASREnded;
@property (class, readonly, nonatomic) NSString *ASRInfo;
@property (class, readonly, nonatomic) NSString *ChatResponse;
@property (class, readonly, nonatomic) NSString *ChatEnded;
@property (class, readonly, nonatomic) NSString *TTSSentenceStart;
@property (class, readonly, nonatomic) NSString *TTSResponse;
@property (class, readonly, nonatomic) NSString *TTSSentenceEnd;
@property (class, readonly, nonatomic) NSString *TTSEnded;
@property (class, readonly, nonatomic) NSString *RequestRetried;
@property (class, readonly, nonatomic) NSString *BSResponse;
@property (class, readonly, nonatomic) NSString *BotTriggered;
@property (class, readonly, nonatomic) NSString *AudioUploadEnded;
@property (class, readonly, nonatomic) NSString *Pong;

@end
