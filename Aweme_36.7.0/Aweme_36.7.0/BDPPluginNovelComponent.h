@class NSString, NSMapTable, BDPNovelElementManager, NSObject;
@protocol OS_dispatch_queue;

@interface BDPPluginNovelComponent : BDPBridgeInstancePlugin <BDPNovelEventDelegate> {
    NSMapTable *_componentTable;
    NSMapTable *_componentModelTable;
    NSMapTable *_storageConfigTable;
    BDPNovelElementManager *_elementManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendNovelEvent:(id)a0 param:(id)a1 uniqueID:(id)a2 pageID:(long long)a3;
- (id)getStorageConfig:(id)a0;
- (void)sendLCPParam:(id)a0 uniqueID:(id)a1 pageID:(long long)a2;
- (void)insertNovelRenderWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeNovelRenderWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateRenderContentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateRenderConfigWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateDataCompleteWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)flipPageInHotZoneWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateNovelContentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateElementConfigWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)silentRefreshCurrentContentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)writeNovelDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)readNovelDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)deleteNovelDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
