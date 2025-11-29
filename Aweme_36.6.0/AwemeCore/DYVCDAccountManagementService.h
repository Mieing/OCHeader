@class NSString;

@interface DYVCDAccountManagementService : NSObject <DYVCDAccountManagementServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)switchAccountFrom:(id)a0 target:(id)a1;
+ (Class)aDYAVCDServiceCommonAdapterClass;
+ (id)switchTaskFromAccouont:(id)a0 toAccount:(id)a1;

- (id)aDYAVCDServiceCommonAdapter;

@end
