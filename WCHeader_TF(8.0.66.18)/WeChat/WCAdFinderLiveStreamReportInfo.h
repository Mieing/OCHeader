@interface WCAdFinderLiveStreamReportInfo : NSObject

@property (nonatomic) long long playStartTimestampMs;
@property (nonatomic) long long totalPlayTimeMs;
@property (nonatomic) BOOL joinLiveFlag;
@property (nonatomic) unsigned int joinLiveStartTimestamp;
@property (nonatomic) unsigned int joinLiveEndTimestamp;

- (void)recordPlayStart;
- (void)recordPlayEnd;
- (long long)fetchTotalPlayTimeMs;
- (void)processBeforeReport;

@end
