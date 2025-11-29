@class NSString, NSUserDefaults;

@interface IESPrefetchDefaultCacheStorage : NSObject <IESPrefetchCacheStorageProtocol>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchObjectForKey:(id)a0;
- (id)fetchAllKeys;
- (id)initWithSuite:(id)a0;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)a0;
- (void)saveObject:(id)a0 forKey:(id)a1;

@end
