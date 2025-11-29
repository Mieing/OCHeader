@interface VoipMinimizeReportObject : MMObject

@property (nonatomic) unsigned int m_clickMinimizeButtonTime;
@property (nonatomic) unsigned int m_clickMinimizeButtonCount;
@property (nonatomic) unsigned int m_startVoipTime;

- (id)init;
- (void)reportMinimizeButtonClickForVideo;
- (void)reportMinimizeButtonClickForAudio;
- (void)reportMinimizeModeTimeForVideo;
- (void)reportMinimizeModeTimeForAudio;
- (void)recordVoipStartTime;
- (void)reportTotalMinimizeCountWithTotalTalkTime;

@end
