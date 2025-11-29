@class NSData;

@interface AiVoIPCSMicSpeakerStatus : WXPBGeneratedMessage

@property (nonatomic) int micStatus;
@property (nonatomic) int speakerStatus;
@property (retain, nonatomic) NSData *transferCtx;
@property (nonatomic) int audioTs;
@property (retain, nonatomic) NSData *voiceBtnSideInfo;

+ (void)initialize;

@end
