@class NSString;

@interface WCFinderExtStatsLiveNotifyExposeReportModel : WCFinderExtStatsReportBaseModel

@property (nonatomic) unsigned long long autoPlayDurationMS;
@property (retain, nonatomic) NSString *noticeID;

- (id)generateOtherKVsDictionary;
- (void).cxx_destruct;

@end
