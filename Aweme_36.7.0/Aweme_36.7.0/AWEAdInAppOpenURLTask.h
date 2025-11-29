@interface AWEAdInAppOpenURLTask : AWEAdBasicTask

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)extraInfo:(id)a0;
- (id)urlAppendDislikeParams:(id)a0 withModel:(id)a1 clickPosition:(id)a2;
- (void)trackHandleURL:(id)a0 result:(BOOL)a1;
- (void)openURL:(id)a0 initialData:(id)a1 globalProps:(id)a2;

@end
