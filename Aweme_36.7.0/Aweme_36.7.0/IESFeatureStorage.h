@class AWEStorage;

@interface IESFeatureStorage : NSObject

@property (retain, nonatomic) AWEStorage *storage;

+ (id)sharedInstance;

- (BOOL)setBool:(BOOL)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setDouble:(double)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setFloat:(float)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setObject:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)removeObjectForKey:(id)a0 err:(id *)a1;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
