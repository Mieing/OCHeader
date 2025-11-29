@class NSString;

@interface IESLiveAnnouncementFinishModel : IESLiveDynamicModel

@property (nonatomic) BOOL switchOn;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) long long announcementID;
@property (copy, nonatomic) NSString *latestLiveTimestamp;
@property (nonatomic) long long liveStartTime;

- (void).cxx_destruct;

@end
