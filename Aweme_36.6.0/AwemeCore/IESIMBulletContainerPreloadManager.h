@class NSString;
@protocol IESIMBulletContainerPreloadDelegate;

@interface IESIMBulletContainerPreloadManager : NSObject <IESIMBulletContainerPreloadManagerProtocol>

@property (weak, nonatomic) id<IESIMBulletContainerPreloadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tryPreloadBulletItemsWithContext:(id)a0;
- (BOOL)preloadWithBulletItem:(id)a0 preloadContext:(id)a1;
- (BOOL)p_shouldSyncMainThreadWithScene:(long long)a0;
- (void)p_preLayoutWithBulletItem:(id)a0 preloadContext:(id)a1;
- (void)p_preloadFullCardWithBulletItem:(id)a0 preloadContext:(id)a1;
- (id)p_seperateRenderConfigWithBulletItem:(id)a0 preloadContext:(id)a1;
- (id)preLayoutWithConfig:(id)a0 context:(id)a1 finishBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)p_bulletContextWithBulletItem:(id)a0 preloadContext:(id)a1;
- (id)p_modifiedSchemaWithThreadStrategyParams:(id)a0;
- (id)p_bulletContextWithBulletItem:(id)a0 preloadFullCard:(BOOL)a1 preloadContext:(id)a2;
- (id)p_threadStrategyParams;
- (void).cxx_destruct;

@end
