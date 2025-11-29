@class NSString, NSDate;

@interface MMDictationVoiceInfo : NSObject

@property (nonatomic) unsigned long long triggerScene;
@property (copy, nonatomic) NSString *voiceId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (id)description;
- (void).cxx_destruct;

@end
