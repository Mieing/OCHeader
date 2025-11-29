@class NSString;

@interface IESGCPXPlayGameGlobalRouterProvider : NSObject <IESGCPXPlayGameGlobalRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openXPlayGameWithSchemaParams:(id)a0 completion:(id /* block */)a1;
- (void)openXPlayLynxPageWithSchemaParams:(id)a0 completion:(id /* block */)a1;

@end
