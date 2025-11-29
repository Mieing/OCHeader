@class NSString;

@interface WCTPAssetDataLoaderProxy : WCAssetDataLoaderProxy <TPAssetResourceLoaderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLoadingRequestWithRequestID:(int)a0;
- (void)onReceiveNewLoadingRequest:(id)a0;
- (BOOL)respondDataWithLoadingRequest:(id)a0;
- (BOOL)tpResourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)tpResourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;

@end
