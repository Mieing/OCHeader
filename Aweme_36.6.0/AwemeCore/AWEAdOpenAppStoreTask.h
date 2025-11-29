@interface AWEAdOpenAppStoreTask : AWEAdBasicTask

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)tryStartAutoOpenAfterDownloadWithContext:(id)a0;
- (id)composeLogAttributesWithAdContext:(id)a0;

@end
