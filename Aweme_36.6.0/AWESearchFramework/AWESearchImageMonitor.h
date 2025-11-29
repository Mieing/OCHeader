@class NSString;

@interface AWESearchImageMonitor : NSObject <AWEImageMonitorDelegate, AWEImageLoadMetricsDelegate>

@property (nonatomic) BOOL isListening;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didReceiveMonitor:(id)a0 attributes:(id)a1 extra0:(id)a2 extra1:(id)a3;
- (void)didReceiveImageLoadMetrics:(id)a0;
- (void)beginListen;
- (void)endListen;
- (BOOL)enableImageMonitorV2;
- (BOOL)enableImageMonitor;
- (unsigned long long)largeImageTypeWith:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 fileSize:(double)a2;
- (id)convertAttribute:(id)a0;
- (BOOL)enableAsyncReport;
- (BOOL)shouldReportLoadMetricInfo:(id)a0;
- (id)init;

@end
