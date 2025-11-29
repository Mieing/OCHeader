@class NSString, MMFinderLiveTaskId;

@interface MMLiveAudienceConnectMicSessionDataReporter : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *subSessionId;
@property (nonatomic) unsigned int liveMode;
@property (nonatomic) unsigned int liveSubMode;
@property (nonatomic) unsigned long long connectMicScene;

- (id)initWithTaskId:(id)a0;
- (void)updateConnectMicScene:(unsigned long long)a0;
- (void)updateDataWithSubSessionId:(id)a0 liveMode:(unsigned int)a1 liveSubMode:(unsigned int)a2;
- (void)reportSessionBegin;
- (void)reportSessionEnd;
- (void)reportSessionWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
