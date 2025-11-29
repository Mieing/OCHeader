@class OpenApiParameter, WapPayParameter, NSString;

@interface OpenApiRootHolderMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) OpenApiParameter *openApiParameter;
@property (retain, nonatomic) WapPayParameter *wapPayParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)storeOpenApiParameter:(id)a0;
- (void)clearOpenApiParameter;
- (void)storeWapPayParameter:(id)a0;
- (void)clearWapPayParameter;
- (void)dealloc;
- (void).cxx_destruct;

@end
