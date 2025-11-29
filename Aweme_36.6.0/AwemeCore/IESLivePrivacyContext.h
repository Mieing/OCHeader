@class NSLock, NSString, NSHashTable;

@interface IESLivePrivacyContext : NSObject <IESLivePrivacyPolicyConditionProvider>

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAllProviderClassNames;
- (id)getConditionValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)registerProvider:(id)a0;
- (id)init;
- (void)removeProvider:(id)a0;

@end
