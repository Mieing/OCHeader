@class NSString;

@interface HMDHighPriorityModule : HMDBaseModule <HMDModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__domainFromConfig:(id)a0;
- (BOOL)__isEncryptEnabledFromConfig:(id)a0;
- (void)updateModuleConfig:(id)a0;
- (void)configMigrateRequestModel:(id)a0 withConfig:(id)a1;
- (id)createModuleDescriptor;

@end
