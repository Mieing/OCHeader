@interface AWEIMChatCellComponentBase : AWEIMCellComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)setPresenterAdapter:(id)a0;
- (void)reloadPresenter;
- (id)presenterForSnapshot;
- (void)invokeInAsyncQueue:(id /* block */)a0;
- (void)reloadChatCell;
- (id)updateRenderPresenter;
- (void)p_reloadViewIfNeeded;

@end
