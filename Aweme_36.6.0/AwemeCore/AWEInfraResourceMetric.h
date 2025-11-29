@class NSString, NSObject;
@protocol OS_dispatch_queue, AWEStorageServiceFileKitResourceMetricInterface;

@interface AWEInfraResourceMetric : NSObject <AWEResourceEventDelegate>

@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricQueue;
@property (nonatomic) BOOL enableMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
