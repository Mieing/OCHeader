@class NSString;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWEPluginDiskResourceMetricImpl : NSObject <BDPDiskResourceMetricPluginDelegate>

@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> pkgMetricDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)metricPKGResourceWithAppid:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
