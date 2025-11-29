@class NSString, NSData;

@interface StreamInputQueueItem : MMObject

@property (nonatomic) unsigned int inputId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int sequence;
@property (copy, nonatomic) NSData *voiceData;
@property (copy, nonatomic) NSData *pcmVoiceData;
@property (nonatomic) unsigned int inputLanguageType;

- (id)initWithItem:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
