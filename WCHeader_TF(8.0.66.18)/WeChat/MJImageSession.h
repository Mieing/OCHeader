@class OMJImageSession, OMJMaasSessionHolder;

@interface MJImageSession : MJTemplateSession

@property (retain, nonatomic) OMJMaasSessionHolder *sessionHolder;
@property (retain, nonatomic) OMJImageSession *imageSession;

+ (id)createRenderView;
+ (id)materialManager;

- (BOOL)createMaasSession;
- (BOOL)_createCoverImageSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_clearImageSessionWithCompletionHandler:(id /* block */)a0;
- (void)_clearPlaybackSessionWithCompletionHandler:(id /* block */)a0;
- (void)_clearSessionHolderWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
