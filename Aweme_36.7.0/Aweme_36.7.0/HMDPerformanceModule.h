@class NSString;

@interface HMDPerformanceModule : HMDBaseModule <HMDModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)conditionArrayWithTableName:(id)a0;
- (void)__logEventUploadInfo:(id)a0;
- (id)__doubleUploadUrlFromConfig:(id)a0;
- (id)__domainFromConfig:(id)a0;
- (BOOL)__isEncryptEnabledFromConfig:(id)a0;
- (void)updateModuleConfig:(id)a0;
- (void)configMigrateRequestModel:(id)a0 withConfig:(id)a1;
- (id)createModuleDescriptor;
- (id)dataBaseTableMap;

@end
