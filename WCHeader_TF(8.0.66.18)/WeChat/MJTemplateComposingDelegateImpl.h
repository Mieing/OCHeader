@interface MJTemplateComposingDelegateImpl : NSObject

- (void)handleFinishActionWithProducerVC:(id)a0 sightDraft:(id)a1 isAsyncComposite:(BOOL)a2 publisher:(id)a3 succeedHandler:(id /* block */)a4 failedHandler:(id /* block */)a5;
- (void)handleCancelActionWithProducerVC:(id)a0 isCleanUpSuccessful:(BOOL)a1 publisher:(id)a2;
- (void)openMovieComposingInDirectlyWithDelegate:(id)a0 producerVC:(id)a1 contextVC:(id)a2 sightDraft:(id)a3 isAsyncComposite:(BOOL)a4 publisher:(id)a5 failedHandler:(id /* block */)a6;
- (void)_openMovieComposingInDirectlyWithDelegate:(id)a0 contextVC:(id)a1 sightDraft:(id)a2 originalAssets:(id)a3 publisher:(id)a4 failedHandler:(id /* block */)a5;
- (id)phAssetsWithAssetInfos:(id)a0;

@end
