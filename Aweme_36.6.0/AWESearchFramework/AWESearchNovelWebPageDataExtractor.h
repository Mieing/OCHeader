@class AWESearchNovelNativeReaderConfig, NSMutableDictionary, AWESearchSynthesisNovelChapterListFragment, NSObject, NSMutableArray;
@protocol OS_dispatch_group;

@interface AWESearchNovelWebPageDataExtractor : NSObject

@property (retain, nonatomic) NSMutableDictionary *chapterPageMap;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) BOOL lastChapterListBatchTaskFinished;
@property (nonatomic) long long lastChapterListBatchTaskSelectorIndex;
@property (nonatomic) BOOL jsbLastChapterListBatchTaskFinished;
@property (nonatomic) long long jsblastChapterListBatchTaskSelectorIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *batchTaskGroup;
@property (retain, nonatomic) AWESearchNovelNativeReaderConfig *config;
@property (retain, nonatomic) AWESearchSynthesisNovelChapterListFragment *chapterListFragment;

- (void)p_updateChapterSelectorListWithResult:(id)a0;
- (void)p_trackWebCatalogLoadResultWithScene:(id)a0 Duration:(double)a1 ErrorCode:(long long)a2;
- (void)extractCatalogInfoWithUrl:(id)a0 withComplete:(id /* block */)a1;
- (void)extractCatalogInfoWithTranscodeResult:(id)a0 withComplte:(id /* block */)a1;
- (id)p_triggerTransCodeDataExtractWithUrl:(id)a0 ExtracType:(id)a1 WillPerformTranscodingBlock:(id /* block */)a2 DidLoadTranscodeScriptBlock:(id /* block */)a3 DidReceiveTranscodeResultBlock:(id /* block */)a4 DidFinishTranscodingBlock:(id /* block */)a5 DecidePolicyForNavigationActionBlock:(id /* block */)a6 DidFailNavigationBlock:(id /* block */)a7 DidReceiveSccInterceptionBlock:(id /* block */)a8 DidLoadOriginWebFinished:(id /* block */)a9;
- (BOOL)hasChapterSelector;
- (void)p_updateChapterListWithResult:(id)a0 jsbTrigger:(BOOL)a1;
- (void)loadmoreChapterListWithComplete:(id /* block */)a0;
- (void)getSelectorListWithComplete:(id /* block */)a0;
- (void)jsbloadmoreChapterListWithComplete:(id /* block */)a0;
- (void)p_reportTranscodeResultWithRequestUrl:(id)a0 Code:(long long)a1;
- (void)p_buildPageMapForPageFragment:(id)a0;
- (void)p_RecursionLoadChapterListWithRemainingBatch:(long long)a0 IncrementList:(id)a1 Complete:(id /* block */)a2;
- (void)p_jsbRecursionLoadChapterListWithRemainingBatch:(long long)a0 IncrementList:(id)a1 Complete:(id /* block */)a2;
- (id)p_jsbinsertNewExtractedChapterListWithResult:(id)a0 Selector:(id)a1;
- (id)p_insertNewExtractedChapterListWithResult:(id)a0 Selector:(id)a1;
- (void)p_updateChapterIndex;
- (id)monitorTrackParams:(id)a0;
- (void)createBookInfoWithResult:(id)a0 Complete:(id /* block */)a1;
- (void)contentLoadmoreChapterListWithComplete:(id /* block */)a0 IncrementReturn:(BOOL)a1;
- (void)catalogLoadmoreChapterListWithComplete:(id /* block */)a0;
- (void)extractChapterPageInfoWithUrl:(id)a0 isPreload:(BOOL)a1 Complete:(id /* block */)a2;
- (long long)chapterNumbers;
- (void)updateDataEngineWithConfig:(id)a0;
- (void)buildPageMapForPageFragment:(id)a0;
- (void)p_createBookInfoWithResult:(id)a0;
- (void)p_updateChapterSelectorAndListInfoWithResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
