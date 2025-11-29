@class NSMutableDictionary, NSRecursiveLock;

@interface BDPToolbarItemManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *buttonFuncProviderDict;
@property (retain, nonatomic) NSRecursiveLock *providerLock;

+ (Class)getProviderWithButtonType:(unsigned long long)a0;
+ (id)keyStringForType:(long long)a0;
+ (void)registerToolbarItemProviderClass:(Class)a0 buttonType:(unsigned long long)a1;
+ (id)sharedManager;

- (Class)getProviderWithButtonType:(unsigned long long)a0;
- (void)registerToolbarItemProviderClass:(Class)a0 buttonType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
