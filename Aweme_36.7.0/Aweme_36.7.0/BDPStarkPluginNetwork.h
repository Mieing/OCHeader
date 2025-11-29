@interface BDPStarkPluginNetwork : BDPPluginNetwork_HG

- (long long)sizeWithPath:(id)a0;
- (void)subscribeHandlerToJSRuntimeIfNeed:(id)a0 event:(id)a1 pageID:(long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (long long)maxFileSizeForCommon:(id)a0;
- (id)getUserPathWithUniqueID:(id)a0;
- (void)subscribeHandlerToJSRuntime:(id)a0 event:(id)a1 pageID:(long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (id)init;

@end
