@class NSString, NSDictionary, AWEContextStore;

@interface AWENearbyPageActionContext : NSObject

@property (retain, nonatomic) AWEContextStore *context;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSDictionary *actionParams;

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
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithActionType:(id)a0;

@end
