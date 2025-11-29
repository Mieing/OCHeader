@class NSArray, NSMutableArray;

@interface TBOrderedSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableArray *pairs;
@property (readonly, copy) NSArray *allValues;
@property (readonly, copy) NSArray *allKeys;

- (id)constructPairWithKey:(id)a0 value:(id)a1;
- (id)pairForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
