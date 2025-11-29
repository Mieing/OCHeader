@class NSString, NSMutableArray, NSMutableSet;

@interface WCFinderExtStatsReporter : NSObject

@property (retain, nonatomic) NSMutableArray *stats;
@property (retain, nonatomic) NSMutableSet *exposeTidSet;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *replayEnterScene;

+ (void)extStatReportWithType:(int)a0 dataItem:(id)a1 commentScene:(int)a2 templateInfo:(id)a3;
+ (void)extStatReportWithType:(int)a0 dataItem:(id)a1 commentScene:(int)a2 liveNoticeInfo:(id)a3;

- (void)addStatReportDataWithType:(int)a0 dataItem:(id)a1;
- (void)addStatReportDataWithType:(int)a0 dataItem:(id)a1 searchData:(id)a2 resultList:(id)a3 fromTab:(id)a4 toTab:(id)a5 value:(id)a6 strValue:(id)a7;
- (void)addExtStat:(id)a0;
- (void)addExtStat:(id)a0 withType:(int)a1 tid:(id)a2;
- (id)genExtStatsWithType:(int)a0 dataItem:(id)a1;
- (void)reportAndClearExistData;
- (void).cxx_destruct;

@end
