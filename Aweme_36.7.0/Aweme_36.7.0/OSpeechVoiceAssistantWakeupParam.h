@class NSString;

@interface OSpeechVoiceAssistantWakeupParam : NSObject

@property (retain, nonatomic) NSString *wakeWord;
@property (nonatomic) BOOL isConfFetched;
@property (retain, nonatomic) NSString *vuiId;
@property (nonatomic) long long vuiQueryMode;
@property (nonatomic) BOOL enableOneShot;

- (void).cxx_destruct;

@end
