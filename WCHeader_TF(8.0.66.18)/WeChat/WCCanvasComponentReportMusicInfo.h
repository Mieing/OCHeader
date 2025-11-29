@interface WCCanvasComponentReportMusicInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) unsigned int musicDuration;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int playCompletedCount;
@property (nonatomic) unsigned long long playedTime;
@property (nonatomic) unsigned int maxPlayTime;

- (id)dictionaryRepresentation;

@end
