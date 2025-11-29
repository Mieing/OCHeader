@class NSString;

@interface BDPMMKVKVImpl : NSObject <BDPKVStorageInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)sharedPlugin;

- (id)getDefaultKVStorage;
- (id)getKVStorageWithStorageId:(id)a0 path:(id)a1;

@end
