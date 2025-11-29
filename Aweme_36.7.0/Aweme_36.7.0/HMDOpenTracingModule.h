@class NSString;

@interface HMDOpenTracingModule : HMDBaseModule <HMDModuleProtocol> {
    Class _traceClass;
    Class _spanClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchDataFromDatabase;
- (void)dataDidReportSuccess:(BOOL)a0;
- (id)__domainFromConfig:(id)a0;
- (BOOL)__isEncryptEnabledFromConfig:(id)a0;
- (void)updateModuleConfig:(id)a0;
- (void)configMigrateRequestModel:(id)a0 withConfig:(id)a1;
- (id)createModuleDescriptor;
- (id)dataBaseTableMap;
- (id)init;

@end
