@class NSString, NSData;

@interface SAMICore_VoiceAssistantPropertyParameter : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL enableAudioInput;
@property (nonatomic) BOOL enableUploadAudio;
@property (nonatomic) BOOL enableTextReading;
@property (nonatomic) BOOL enableRealtimeVoiceCall;
@property (nonatomic) int interruptType;
@property (retain, nonatomic) NSString *question;
@property (retain, nonatomic) NSString *chat;
@property (retain, nonatomic) NSString *reconnectQuestionId;
@property (nonatomic) int reconnectStatus;
@property (nonatomic) int business;
@property (nonatomic) int requestType;
@property (nonatomic) int triggerType;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSString *updateUIContextPayload;
@property (retain, nonatomic) NSString *trace;
@property (retain, nonatomic) NSString *uploadInfoPayload;
@property (nonatomic) int playerStatus;
@property (retain, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSString *wakeupId;
@property (nonatomic) int vuiQueryMode;
@property (nonatomic) BOOL enableOneShot;
@property (nonatomic) int imageType;
@property (nonatomic) int intentMode;
@property (nonatomic) int imageStatus;
@property (nonatomic) int highQuality;
@property (nonatomic) BOOL enableTouch;
@property (nonatomic) BOOL enableBurst;
@property (nonatomic) BOOL enablePlayer;
@property (nonatomic) BOOL enableAudioRecorder;
@property (nonatomic) int audioRecordChannels;
@property (retain, nonatomic) NSString *updateAudioConfigPayload;
@property (retain, nonatomic) NSData *imgData;

- (void)dealloc;

@end
