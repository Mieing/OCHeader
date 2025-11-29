@interface AWEEnergyCommonOptimizer : NSObject

+ (BOOL)logTypeEnabled:(id)a0;
+ (BOOL)serviceTypeEnabled:(id)a0;
+ (void)setLogModifyBlock:(id /* block */)a0;
+ (double)getFreeDiskSpaceWithKey:(id)a0;
+ (void)setupHMDOptimizer;
+ (BOOL)needUploadWithLogTypeStr:(id)a0 serviceName:(id)a1;
+ (void)_aweLazyRegisterStaticLoad_disk_opt;
+ (id)shared;

- (void)handleABTestChange;
- (void)setNumberOptimizeIfNeeded;

@end
