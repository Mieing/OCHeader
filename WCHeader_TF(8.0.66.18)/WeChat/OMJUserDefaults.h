@interface OMJUserDefaults : NSObject

+ (id)sharedInstance;

- (id)stringForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
