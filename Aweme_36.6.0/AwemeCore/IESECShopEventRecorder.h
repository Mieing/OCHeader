@class NSMutableDictionary;

@interface IESECShopEventRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventRecords;

- (id)eventRecordForTabType:(unsigned long long)a0;
- (BOOL)p_checkEventParams:(id)a0 filterRule:(id)a1;
- (void)recordEvent:(id)a0 params:(id)a1 curTabType:(unsigned long long)a2;
- (void)recordScrollOffset:(double)a0 curTabType:(unsigned long long)a1;
- (id)userBehaviorReportParams;
- (void).cxx_destruct;
- (id)init;

@end
