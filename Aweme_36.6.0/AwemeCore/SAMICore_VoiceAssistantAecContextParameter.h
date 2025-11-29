@class NSString;

@interface SAMICore_VoiceAssistantAecContextParameter : NSObject

@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) unsigned long long srcSampleRate;
@property (nonatomic) unsigned long long srcNumberChannel;
@property (nonatomic) unsigned long long refSampleRate;
@property (nonatomic) unsigned long long refNumberChannel;
@property (retain, nonatomic) NSString *micSelectConfig;
@property (retain, nonatomic) NSString *audioDumpPath;
@property (nonatomic) int maxBlockSize;

- (void)dealloc;

@end
