@class WCSamplingStatData, NSRecursiveLock, MMGPUSamplingTraceInfo;

@interface WCSamplingReportEvent : NSObject

@property (retain, nonatomic) WCSamplingStatData *stackReportData;
@property (retain, nonatomic) WCSamplingStatData *kvReportData;
@property (retain, nonatomic) MMGPUSamplingTraceInfo *samplingTraceInfo;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)GenerateReportItemWithEventList:(id)a0;

- (id)initWithSamplingTraceInfo:(id)a0;
- (void)updateWithSamplingTraceInfo:(id)a0;
- (void)reportToMMData;
- (BOOL)shouldReportStack;
- (id)generateStackReportItem;
- (void).cxx_destruct;

@end
