@class MMKV;

@interface BDUGFlowHelper : NSObject

@property (retain, nonatomic) MMKV *cache;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (id)sharedInstance;
+ (void)log;

- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void)removeValueForKey:(id)a0;
- (id)getDictionaryForKey:(id)a0;

@end
