@class NSMutableDictionary;

@interface BDRuleParameterRegistry : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *registryMap;
@property (nonatomic) BOOL enableLock;

+ (void)registerConstParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (id)constParameters;
+ (void)registerParameterWithKey:(id)a0 type:(unsigned long long)a1 builder:(id /* block */)a2;
+ (void)registerParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (void)updateParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (id)stateParameters;
+ (id)allParameters;
+ (id)sharedInstance;
+ (id)builderForKey:(id)a0;

- (void)__registerParameterWithKey:(id)a0 origin:(unsigned long long)a1 type:(unsigned long long)a2 builder:(id /* block */)a3 value:(id)a4;
- (id)__builderForKey:(id)a0;
- (void)updateParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
- (void).cxx_destruct;
- (void)_unlock;
- (id)init;
- (void)_writeLock;
- (void)_readLock;

@end
