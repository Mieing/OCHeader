@interface AWEAdOpenWeChatMiniAppTask : AWEAdBasicTask

- (BOOL)shouldBeExcuted;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;

@end
