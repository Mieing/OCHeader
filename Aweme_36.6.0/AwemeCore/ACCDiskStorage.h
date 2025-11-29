@class NSString;
@protocol ACCDiskCleanStrategyProtocol, AWEStorageServiceFileKitResourceMetricInterface;

@interface ACCDiskStorage : NSObject <ACCStorageProtocol>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<ACCDiskCleanStrategyProtocol> strategy;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_rootDirForType:(unsigned long long)a0;
- (unsigned long long)optAPPDiskSpaceUsedForPath:(id)a0;
- (id /* block */)AWEDiskCleanCheckStrategyExecIntervalFlow;
- (id /* block */)AWEDiskCleanDoCleanItemsFlow;
- (id /* block */)AWEDiskCleanUpdateStrategyExecTSFlow;
- (void)cleanByStrategy:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (unsigned long long)totalSize;
- (id)initWithIdentifier:(id)a0 path:(id)a1;
- (BOOL)clean;

@end
