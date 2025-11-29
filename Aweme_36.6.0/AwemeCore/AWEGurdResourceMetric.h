@class NSDictionary, NSString;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWEGurdResourceMetric : NSObject <IESGurdEventDelegate>

@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (retain, nonatomic) NSDictionary *geckoPathMetricChannelDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidAccessInternalPackageWithAccessKey:(id)a0 channel:(id)a1 path:(id)a2 dataAccessPolicy:(long long)a3;
- (void)gurdDidAccessCachePackageWithAccessKey:(id)a0 channel:(id)a1 path:(id)a2;
- (void).cxx_destruct;
- (void)setup;

@end
