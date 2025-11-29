@interface AWESearchUserCachalotLynxPipeline : AWESearchCachalotLynxPipeline

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)generateLynxEngineWithModel:(id)a0 preferWidth:(double)a1 useBullet:(BOOL)a2 shouldReuseLynxView:(BOOL)a3 searchScene:(id)a4 defaultReuseMethod:(long long)a5;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)needLynxEnginePrepareForReuse;

@end
