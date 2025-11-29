@class NSString;

@interface BDLynxGurdModule : NSObject <BDLGurdModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)sharedInstance;

- (void)syncResourcesIfNeeded;
- (BOOL)enableGurd;
- (void)bytedSettingDidChange;
- (void)syncResourcesWithChannel:(id)a0 isUrgent:(BOOL)a1 completion:(id /* block */)a2;
- (void)_syncHighPriorityResources;
- (void)_syncDefaultPriorityResources;
- (id)accessKeyDirectory;
- (id)lynxFilePathForChannel:(id)a0;
- (BOOL)isSingleLynxFileForChannel:(id)a0;
- (void)syncResourcesWithChannel:(id)a0 completion:(id /* block */)a1;
- (void)syncResourcesWithChannel:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)_syncResourcesWithChannels:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
