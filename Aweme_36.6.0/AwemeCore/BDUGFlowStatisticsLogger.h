@protocol BDUGFlowStatisticsLoggerProtocol;

@interface BDUGFlowStatisticsLogger : NSObject

@property (weak, nonatomic) id<BDUGFlowStatisticsLoggerProtocol> delegate;

- (void)onLogLevel:(unsigned long long)a0 info:(id)a1;
- (void).cxx_destruct;

@end
