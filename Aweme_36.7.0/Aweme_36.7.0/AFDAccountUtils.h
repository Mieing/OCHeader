@interface AFDAccountUtils : NSObject

+ (id)getVCDAccount;
+ (void)checkIfUserIsVCDAccount:(id)a0 withCompletion:(id /* block */)a1;
+ (Class)aDYAVCDServiceCommonAdapterClass;
+ (void)checkIfUserIsInLoginAccountList:(id)a0 withCompletion:(id /* block */)a1;

- (id)getAdapter;
- (id)aDYAVCDServiceCommonAdapter;

@end
