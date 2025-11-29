@class NSMutableSet;

@interface HMDReportSizeLimitManager : NSObject

@property (nonatomic) BOOL isRunning;
@property (nonatomic) unsigned long long thresholdSize;
@property (retain, nonatomic) NSMutableSet *tools;
@property (nonatomic) long long currentDataSize;
@property (nonatomic) unsigned long long uploadIntervalSec;

+ (id)defaultControlManager;

- (void)stopSizeLimit;
- (void)startSizeLimit;
- (void)addSizeLimitTool:(id)a0;
- (void)removeSizeLimitTool:(id)a0;
- (BOOL)increaseDataLength:(unsigned long long)a0;
- (void)setDataSizeThreshold:(unsigned long long)a0;
- (void)dataSizeThreshold:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
