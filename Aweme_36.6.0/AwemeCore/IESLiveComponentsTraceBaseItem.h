@class NSString, NSMutableDictionary;

@interface IESLiveComponentsTraceBaseItem : NSObject

@property (nonatomic) double enterStart;
@property (retain, nonatomic) NSMutableDictionary *infos;
@property (retain, nonatomic) NSMutableDictionary *metricInfo;
@property (retain, nonatomic) NSMutableDictionary *categoryInfo;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (retain, nonatomic) NSString *index;
@property (nonatomic) unsigned long long method;
@property (copy, nonatomic) id /* block */ complete;

- (id)durationValid:(double)a0;
- (id)keyWithStage:(unsigned long long)a0;
- (void)monitorIfNeedForState:(unsigned long long)a0 isEnd:(BOOL)a1;
- (id)sceneIdForState:(unsigned long long)a0 isEnd:(BOOL)a1;
- (id)metricWithInfo:(id)a0;
- (void)traceEventWithMetric:(id)a0 category:(id)a1 extra:(id)a2;
- (void)startStage:(unsigned long long)a0;
- (void)endStage:(unsigned long long)a0;
- (void)insertMetric:(id)a0;
- (void)insertCategory:(id)a0;
- (void)insertExtra:(id)a0;
- (id)traceInfoWithStage:(unsigned long long)a0;
- (BOOL)invalid;
- (void).cxx_destruct;
- (void)report;
- (id)init;

@end
