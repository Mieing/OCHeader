@class BDRLRUCache, BDLayoutManager, NSMutableSet, NSString, BDReaderModel, BDParserManager;
@protocol BDPageControllDelegate;

@interface BDPageControllManager : NSObject <BDLayoutManagerDelegate>

@property (retain, nonatomic) NSMutableSet *loadingChapterIdSet;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDRLRUCache *layoutChapterDataCache;
@property (retain, nonatomic) BDLayoutManager *layoutManager;
@property (retain, nonatomic) BDParserManager *parserManager;
@property (weak, nonatomic) id<BDPageControllDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLayoutChapterDataWithChapterId:(id)a0;
- (void)loadChapterInfoWithChapterId:(id)a0 loadFrom:(unsigned long long)a1 priority:(unsigned long long)a2;
- (id)getPreChapterInfo:(id)a0;
- (id)getNextChapterInfo:(id)a0;
- (void)layoutChapterInfo:(id)a0 chapterContent:(id)a1 priority:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)loadChapterInfoWithChapterId:(id)a0 loadFrom:(unsigned long long)a1 priority:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setLayoutChapterData:(id)a0 withChapterId:(id)a1;
- (void)cleanUpChapterDataCache;
- (BOOL)layoutManager:(id)a0 didFinishLayoutPage:(id)a1 chapterData:(id)a2;
- (void)loadChapterInfoIfNeedWithChapterId:(id)a0 priority:(unsigned long long)a1;
- (id)getNextReaderPageData:(id)a0;
- (id)getPreReaderOpenParamIgnoreCache:(id)a0;
- (id)getNextReaderOpenParamIgnoreCache:(id)a0;
- (id)getPreReaderOpenParam:(id)a0;
- (id)getNextReaderOpenParam:(id)a0;
- (id)getPreReaderPageData:(id)a0;
- (void)cleanUpChapterDataIgnoreChapterId:(id)a0;
- (void)cleanUpChapterDataWithChapterId:(id)a0;
- (void)relayoutChapterDataWithChapterId:(id)a0 priority:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)relayoutChapterDataWithChapterId:(id)a0 pageIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)isLayoutChapterDataCache:(id)a0;
- (id)cacheChapterIds;
- (void)updateChapterDataChapterInfo;
- (void)preloadChapterInfoWithChapterId:(id)a0;
- (void)loadBookInfo:(id /* block */)a0 append:(id /* block */)a1;
- (id)initWithReaderModel:(id)a0;
- (id)getPageDataWithOpenParams:(id)a0;
- (BOOL)textData:(id)a0 chapterData:(id)a1 containOpenParams:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
