@class NSString;

@interface PTYMemoryCache : NSObject

@property (readonly, copy, nonatomic) NSString *business;
@property (readonly, copy, nonatomic) NSString *aid;

- (id)getValuesForKeys:(id)a0;
- (id)getCache;
- (id)getValuesForKeys:(id)a0 withTryLock:(BOOL *)a1;
- (id)getCacheWithTryLock:(BOOL *)a0;
- (id)initWithBusiness:(id)a0 aid:(id)a1;
- (BOOL)containsKey:(id)a0;
- (id)getValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)setCache:(id)a0;
- (BOOL)setValue:(id)a0 forKey:(id)a1;
- (BOOL)removeKeys:(id)a0;
- (BOOL)append:(id)a0;

@end
