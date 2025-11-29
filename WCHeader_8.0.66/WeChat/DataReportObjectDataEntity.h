@class NSMutableDictionary;

@interface DataReportObjectDataEntity : NSObject

@property (retain, nonatomic) NSMutableDictionary *objectParams;
@property (retain, nonatomic) NSMutableDictionary *objectEventParams;
@property (retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks;
@property (retain, nonatomic) NSMutableDictionary *reportPolicy;
@property (retain, nonatomic) NSMutableDictionary *reportIntervals;
@property (retain, nonatomic) NSMutableDictionary *lastReportTimes;

- (id)init;
- (void)reset;
- (id)toString;
- (void).cxx_destruct;

@end
