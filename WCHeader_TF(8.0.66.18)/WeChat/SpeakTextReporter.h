@class NSString;

@interface SpeakTextReporter : NSObject

@property (nonatomic) int speakType;
@property (retain, nonatomic) NSString *contentMd5;
@property (nonatomic) int contentLength;
@property (nonatomic) long long prepareSpeakTime;
@property (nonatomic) long long requestDataTime;
@property (nonatomic) long long receiveDataTime;
@property (nonatomic) long long startSpeakTime;

- (void)report;
- (void).cxx_destruct;

@end
