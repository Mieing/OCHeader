@interface AWESearchCachalotLiveLynxPipeline : AWESearchCachalotLynxPipeline

+ (long long)syncGetSearchLiveVerticalUIOpt;
+ (long long)syncGetSearchLiveVerticalStyleOpt;
+ (BOOL)enableLiveSearchAsyncProcess;
+ (id)getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1 containerWidth:(double)a2;

- (id)generateLynxEngineWithModel:(id)a0 preferWidth:(double)a1 useBullet:(BOOL)a2 shouldReuseLynxView:(BOOL)a3 searchScene:(id)a4 defaultReuseMethod:(long long)a5;
- (id)getLynxReuseBlockList;
- (BOOL)supportAsyncComponentViewSizeMeasure;

@end
