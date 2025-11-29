@class MMKV;

@interface BDUGLocationCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cacheMutex;
}

@property (retain, nonatomic) MMKV *cache;

+ (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
+ (BOOL)getBoolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)getDoubleForKey:(id)a0 defaultValue:(double)a1;
+ (double)getDoubleForKey:(id)a0;
+ (id)getStringForKey:(id)a0 defaultValue:(id)a1;
+ (BOOL)setDouble:(double)a0 forKey:(id)a1;
+ (id)sharedCache;
+ (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
+ (BOOL)setString:(id)a0 forKey:(id)a1;
+ (BOOL)setObject:(id)a0 forKey:(id)a1;
+ (id)getStringForKey:(id)a0;
+ (BOOL)getBoolForKey:(id)a0;

- (void)removeAllModels;
- (BOOL)setModel:(id)a0 forKey:(id)a1;
- (id)modelOfClass:(Class)a0 forKey:(id)a1;
- (void)removeModelForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
