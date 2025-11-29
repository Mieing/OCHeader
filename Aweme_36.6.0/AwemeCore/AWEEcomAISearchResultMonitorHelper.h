@class NSNumber, NSMutableDictionary;

@interface AWEEcomAISearchResultMonitorHelper : NSObject

@property (retain, nonatomic) NSNumber *startTS;
@property (retain, nonatomic) NSMutableDictionary *endTimeRecords;
@property (copy, nonatomic) id /* block */ getExtraParams;

- (void)fillTrackParams:(id)a0 withEndTimeKey:(id)a1 finishKey:(id)a2 costKey:(id)a3;
- (void)recordLoadingEnd;
- (void)recordThinkEnd;
- (void)recordSummaryEnd;
- (void)recordGoodsEnd;
- (void)recordEmptyEnd;
- (void)recordErrorEnd;
- (void)finishAndReport;
- (void).cxx_destruct;
- (void)start;
- (void)reset;

@end
