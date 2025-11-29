@class NSString;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface IESECStorageFileResourceMetric : NSObject <IESECStorageFileResourceMetric>

@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resourceDidCreate:(id)a0;
- (void)resourceDidUse:(id)a0;
- (void)resourceDidUpdate:(id)a0;
- (void)resourceDidRemove:(id)a0;
- (id)initWithAWEStorageFileKitResourceMetric:(id)a0;
- (void).cxx_destruct;

@end
