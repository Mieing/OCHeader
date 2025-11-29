@class NSString;

@interface BDCommonABKeychainStorage : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL useUserDefaultCache;
@property (nonatomic) BOOL operationFailure;

- (BOOL)p_setObject:(id)a0 forKey:(id)a1;
- (id)initWithServiceName:(id)a0 useUserDefaultCache:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)removeAll;
- (id)objectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)removeValueForKey:(id)a0;
- (BOOL)hasObjectForKey:(id)a0;

@end
