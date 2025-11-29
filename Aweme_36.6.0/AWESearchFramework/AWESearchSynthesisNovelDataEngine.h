@class AWESearchNovelWebPageDataExtractor, NSString, AWESearchSynthesisNovelChapterListFragment, NSMutableArray, AWESearchNovelNativeReaderConfig;

@interface AWESearchSynthesisNovelDataEngine : NSObject

@property (nonatomic) BOOL isCatalogDescending;
@property (retain, nonatomic) AWESearchNovelNativeReaderConfig *config;
@property (retain, nonatomic) AWESearchNovelWebPageDataExtractor *exractor;
@property (copy, nonatomic) NSString *curChapterTitle;
@property (nonatomic) long long curChapterNumber;
@property (copy, nonatomic) NSString *curPageUrl;
@property (copy, nonatomic) NSString *catalogUrl;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) long long chapterCount;
@property (nonatomic) long long curIndex;
@property (copy, nonatomic) NSString *curChapterName;
@property (retain, nonatomic) AWESearchSynthesisNovelChapterListFragment *chapterListFragment;
@property (retain, nonatomic) NSMutableArray *chapterPageList;
@property (copy, nonatomic) id /* block */ apppendMorePageListCallback;

- (void)initBookChapterInfoWithUrlString:(id)a0 withComplete:(id /* block */)a1;
- (void)loadChapterPageWithUrlString:(id)a0 isPreload:(BOOL)a1 Complete:(id /* block */)a2;
- (BOOL)hasChapterSelector;
- (void)loadmoreChapterListWithComplete:(id /* block */)a0;
- (void)updateDataEngineWithConfig:(id)a0;
- (void)getChapterListInfo:(id)a0 fromIndex:(long long)a1 isDescending:(BOOL)a2 withCompletionBlock:(id /* block */)a3;
- (void)getCurrentChapterListInfo:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (id)curChapterTitle;
- (void)updateCatalogUrl:(id)a0;
- (void)updateChapterListInfo:(id)a0;
- (id)nextChapterFragmentWithIndex:(long long)a0 name:(id)a1;
- (id)prevChapterFragmentWithIndex:(long long)a0 name:(id)a1;
- (id)historyChapterFragment;
- (void)recordReadHistoryWithBook:(id)a0 chapterUrl:(id)a1 name:(id)a2 number:(long long)a3;
- (void)p_updateEngineWithChapterListFragment:(id)a0;
- (long long)getIndexOfChapterTitle:(id)a0 Number:(long long)a1;
- (void)appendBookChapterPageListInfo:(id)a0;
- (void)jsbLoadmoreChapterListWithComplete:(id /* block */)a0;
- (void)buildBookInfoWithOriginalWebTranscodingResult:(id)a0 PreloadChapterList:(BOOL)a1;
- (id)nextChapterFragmentWithChapterNumber:(long long)a0 Title:(id)a1;
- (id)prevChapterFragmentWithChapterNumber:(long long)a0 Title:(id)a1;
- (void)getChapterPageFragmentWithUrl:(id)a0 onlyFromCache:(BOOL)a1 Complete:(id /* block */)a2;
- (id)historyPageFragment;
- (void)recordReadHistoryPageWithBook:(id)a0 PageUrl:(id)a1 name:(id)a2 number:(long long)a3;
- (long long)chapterCount;
- (void).cxx_destruct;

@end
