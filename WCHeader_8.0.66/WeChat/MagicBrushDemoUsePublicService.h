@interface MagicBrushDemoUsePublicService : MagicBrushDemoLogic

- (void)provideMainScript:(id /* block */)a0;
- (id)provideFileSystem;
- (id)getFileDataByPath:(id)a0;
- (void)onMainScriptInjected:(id)a0;

@end
