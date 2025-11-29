@class NSString, NSDate;

@interface WCFinderExtStatsLiveShareExposeReportModel : WCFinderExtStatsReportBaseModel

@property (retain, nonatomic) NSDate *start;
@property (retain, nonatomic) NSDate *end;
@property (nonatomic) unsigned long long autoPlayDurationMS;
@property (retain, nonatomic) NSString *gMsgID;
@property (nonatomic) int exposeScene;

- (id)generateOtherKVsDictionary;
- (void).cxx_destruct;

@end
