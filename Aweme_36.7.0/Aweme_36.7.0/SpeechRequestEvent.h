@class NSString;

@interface SpeechRequestEvent : NSObject

@property (class, readonly, nonatomic) NSString *StartTask;
@property (class, readonly, nonatomic) NSString *FinishTask;
@property (class, readonly, nonatomic) NSString *StartSession;
@property (class, readonly, nonatomic) NSString *FinishSession;
@property (class, readonly, nonatomic) NSString *CancelSession;
@property (class, readonly, nonatomic) NSString *TaskRequest;
@property (class, readonly, nonatomic) NSString *EndASR;
@property (class, readonly, nonatomic) NSString *AbortASR;
@property (class, readonly, nonatomic) NSString *StartTTS;
@property (class, readonly, nonatomic) NSString *EndTTS;
@property (class, readonly, nonatomic) NSString *UpdateUIContext;
@property (class, readonly, nonatomic) NSString *ClientInterrupt;
@property (class, readonly, nonatomic) NSString *PauseCall;
@property (class, readonly, nonatomic) NSString *ContinueCall;
@property (class, readonly, nonatomic) NSString *TriggerBot;
@property (class, readonly, nonatomic) NSString *MuteCall;
@property (class, readonly, nonatomic) NSString *UnmuteCall;
@property (class, readonly, nonatomic) NSString *Ping;

@end
