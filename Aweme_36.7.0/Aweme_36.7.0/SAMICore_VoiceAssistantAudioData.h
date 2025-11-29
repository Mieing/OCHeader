@class NSString, NSData;

@interface SAMICore_VoiceAssistantAudioData : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSData *refData;
@property (nonatomic) unsigned long long refDataSize;
@property (retain, nonatomic) NSString *extra;

- (void)dealloc;

@end
