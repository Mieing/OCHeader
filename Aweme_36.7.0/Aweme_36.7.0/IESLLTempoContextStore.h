@class IESLLTempoThreadSafeMutableDictionary;

@interface IESLLTempoContextStore : NSObject

@property (retain) IESLLTempoThreadSafeMutableDictionary *dictionary;

- (id)contextItemForKey:(id)a0;
- (void)notifyChanged:(id)a0 object:(id)a1;
- (void)setWeakObject:(id)a0 forKey:(id)a1;
- (id)weakObjectForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void)removeAllObjects;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
