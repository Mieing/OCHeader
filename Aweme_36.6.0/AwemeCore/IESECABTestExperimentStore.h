@class NSMutableDictionary;

@interface IESECABTestExperimentStore : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *abTestData;

+ (void)initialize;

- (id)valueForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void)p_setValue:(id)a0 forKey:(id)a1;
- (id)p_valueForKey:(id)a0;
- (void)overrideValue:(id)a0 forKey:(id)a1;
- (id)getValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0 defaultValue:(id /* block */)a1;
- (double)doubleForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)init;
- (id)numberForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)dictionaryForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)arrayForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void)dealloc;
- (id)stringForKey:(id)a0 defaultValue:(id /* block */)a1;
- (long long)integerForKey:(id)a0 defaultValue:(id /* block */)a1;

@end
