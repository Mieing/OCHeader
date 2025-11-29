@class NSMutableArray;

@interface ACCCreativePerfFPSPlugin : ACCCreativePerfPlugin

@property (copy, nonatomic) id /* block */ fpsCallback;
@property (retain, nonatomic) NSMutableArray *fpsRecords;
@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSMutableArray *frameDropRecords;
@property (nonatomic) double lastSampleTime;
@property (nonatomic) double monitorDuration;

+ (BOOL)isEnvEnable;

- (void)startFPSMonitor;
- (void)prepareWithConfig:(id)a0;
- (void)startFrameDropMonitor;
- (void)startReportData;
- (void)clearFPSMonitorData;
- (id)getCurrentFPSMonitorData;
- (void).cxx_destruct;
- (void)clear;
- (void)stop;
- (void)start;

@end
