@class NSString;

@interface IESGCPCGDebugToolsComponent : IESGCPCGInstanceBaseComponent <IESGCPCGDebugToolsRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientDebugInfo;
- (void)didSetGameCPDIContext;
- (id)clientDebugBitrate;
- (id)clientDebugFPS;
- (id)clientDebugResolution;
- (BOOL)isEnableDebug;
- (BOOL)hasDebugStreaming;
- (void)handleDebugJSBAction:(id)a0;
- (id)debugInfoModelToJSB;
- (id)streamingInfoCacheKey;
- (id)supplierInfoCacheKey;
- (void)handleDebugJSBStreaming:(id)a0;
- (void)handleDebugJSBSupplier:(id)a0;

@end
