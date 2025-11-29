@class NSMutableDictionary;

@interface IESLiveFeedDrawerListControllerMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheInfos;
@property (nonatomic) BOOL hasReport;

- (void)enterStage:(unsigned long long)a0 withTime:(double)a1;
- (void)enterStage:(unsigned long long)a0;
- (void)checkIfNeedReportMonitor;
- (void).cxx_destruct;
- (id)init;

@end
