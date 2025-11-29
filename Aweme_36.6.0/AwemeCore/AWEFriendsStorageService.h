@interface AWEFriendsStorageService : NSObject

+ (BOOL)hasSetup;
+ (void)setupStorageGetObject:(id /* block */)a0;
+ (void)setupStorageGetArray:(id /* block */)a0;
+ (id)arrayForKey:(id)a0 domain:(id)a1;
+ (id)objectForKey:(id)a0 domain:(id)a1;

@end
