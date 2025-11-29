@class NSString, MMKV;

@interface PIAMMKVStorage : NSObject <PIAKVStorageProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)piaRootPath;
+ (id)sharedInstance;

- (BOOL)containKey:(id)a0;
- (id)objectForKey:(id)a0 class:(Class)a1;
- (id)initWithStorageID:(id)a0;
- (void).cxx_destruct;
- (void)clearAll;
- (void)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;

@end
