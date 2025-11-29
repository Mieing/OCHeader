@interface MMLivePivotReportingFeedItem : NSObject

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int associatedBlockedLoadingDurationInMilliseconds;
@property (nonatomic) unsigned int timeToFirstFrameInMilliseconds;
@property (nonatomic) unsigned long long lastExposureUnixEpochTime;
@property (nonatomic) unsigned long long lastBeginPlayingUnixEpochTime;
@property (nonatomic) unsigned int cumulatedStayDurationInMilliseconds;
@property (nonatomic) unsigned int cumulatedPlayDurationInMilliseconds;

@end
