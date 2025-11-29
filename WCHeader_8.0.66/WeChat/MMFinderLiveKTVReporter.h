@class NSMutableDictionary;

@interface MMFinderLiveKTVReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *logRecordDict;
@property (nonatomic) double logInterval;

+ (id)createKeyWithTarget:(id)a0 sel:(id)a1 business:(id)a2;

- (id)init;
- (BOOL)tryFreqLogForTarget:(id)a0 sel:(id)a1 business:(id)a2;
- (BOOL)tryFreqLogForTarget:(id)a0 sel:(id)a1 business:(id)a2 interval:(double)a3;
- (void).cxx_destruct;

@end
