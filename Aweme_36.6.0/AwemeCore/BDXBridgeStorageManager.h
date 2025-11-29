@class NSString, NSUserDefaults;

@interface BDXBridgeStorageManager : NSObject

@property (class, readonly, nonatomic) BDXBridgeStorageManager *sharedManager;

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *currentDomain;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
