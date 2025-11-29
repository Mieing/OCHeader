@protocol BDPKVInterface;

@interface BDPBindingStorageModule : NSObject

@property (retain, nonatomic) id<BDPKVInterface> kvStorage;
@property (retain, nonatomic) id<BDPKVInterface> kvStorageBackup;

+ (id)methodLookup;
+ (void)bootstrapLaunch;

- (id)getStorage:(id)a0;
- (id)removeStorage:(id)a0;
- (id)getStorageInfo;
- (id)clearStorage:(id)a0;
- (void).cxx_destruct;
- (id)setStorage:(id)a0;

@end
