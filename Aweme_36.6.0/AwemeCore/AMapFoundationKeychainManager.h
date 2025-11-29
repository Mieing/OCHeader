@interface AMapFoundationKeychainManager : NSObject

@property (nonatomic) unsigned long long synchronizationMode;
@property (nonatomic) void *accessibilityType;

+ (BOOL)isSynchronizationAvailable;

- (id)getKeychainItemForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (BOOL)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;

@end
