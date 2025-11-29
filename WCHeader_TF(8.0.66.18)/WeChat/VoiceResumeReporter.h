@class NSString, CMessageWrap;

@interface VoiceResumeReporter : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int totalTime;
@property (nonatomic) unsigned int playTime;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *actionResult;
@property (nonatomic) unsigned int stopReason;
@property (retain, nonatomic) CMessageWrap *msgWrap;

+ (id)reporter;
+ (void)reportAction:(unsigned int)a0;
+ (void)updateVoiceStopReason:(unsigned int)a0;

- (void)report;
- (void)beforeReport;
- (void)realReport;
- (void)afterReport;
- (void).cxx_destruct;

@end
