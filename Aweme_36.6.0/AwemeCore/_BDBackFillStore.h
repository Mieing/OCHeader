@class NSMutableDictionary;

@interface _BDBackFillStore : NSObject

@property (nonatomic) unsigned long long countLimit;
@property (retain, nonatomic) NSMutableDictionary *dbCache;

+ (id)sharedInstance;

- (void)insertObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;

@end
