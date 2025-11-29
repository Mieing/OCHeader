@interface AWEAdOpenLandingPageTask : AWEAdBasicTask

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (BOOL)taskExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (id)multiWindowAssociatedControllerForNow;
- (void)padMultiPush:(id)a0 withAssociatedController:(id)a1;
- (BOOL)isConsultURL:(id)a0;

@end
