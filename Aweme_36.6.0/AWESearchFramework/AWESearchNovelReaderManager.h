@class NSString, AWESearchSynthesisNovelDataEngine, AWESearchSynthesisNovelBookSettingConfig, BDReaderModel, UIViewController;
@protocol AWESearchNovelReaderManagerDelegate;

@interface AWESearchNovelReaderManager : NSObject <BDReaderDataSource, BDReaderDelegate, BDReaderUIDelegate>

@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) AWESearchSynthesisNovelDataEngine *dataEngine;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *bookConfig;
@property (retain, nonatomic) UIViewController *readerViewController;
@property (weak, nonatomic) id<AWESearchNovelReaderManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readerActionRefreshWithCurChapterInfo;
- (BOOL)onBDReaderShouldPageTransitionWithReadModel:(id)a0 isForward:(BOOL)a1 point:(struct CGPoint { double x0; double x1; })a2 translation:(struct CGPoint { double x0; double x1; })a3;
- (void)onBDReaderWillBeginTransition:(id)a0 toPageContext:(id)a1 pageChangeInfo:(id)a2 readerModel:(id)a3;
- (void)onBDReaderWillCompleteTransitionFromPageContext:(id)a0 toPageContext:(id)a1 pageChangeInfo:(id)a2 readerModel:(id)a3;
- (void)onBDReaderWillCancelTransitionFromPageContext:(id)a0 toPageContext:(id)a1 pageChangeInfo:(id)a2 readerModel:(id)a3;
- (void)onBDReaderDidFinishTransition:(id)a0 fromPageContext:(id)a1 pageChangeInfo:(id)a2 readerModel:(id)a3 completed:(BOOL)a4;
- (BOOL)onBDReaderShouldGetPageWithReadModel:(id)a0 pageContext:(id)a1 isForward:(BOOL)a2;
- (void)onBDReaderPageChangeWithReadModel:(id)a0 curPageContext:(id)a1 targetPageContext:(id)a2 changeInfo:(id)a3;
- (void)didTapPageView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)requestReaderBookInfoWithBookModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestChapterContentWithBookModel:(id)a0 withChapterInfo:(id)a1 loadInfo:(id)a2 completionHandler:(id /* block */)a3;
- (id)p_createReaderModel;
- (id)p_createReaderViewController;
- (void)p_configDataEngineAppendMorePageCallback;
- (void)readerActionRefreshCurrentPage;
- (void)readerActionCleanChapterInfoCache;
- (void)readerActionReloadReaderUI;
- (void)onConfigPageModeChange:(unsigned long long)a0;
- (void)onConfigThemeChange:(unsigned long long)a0;
- (void)p_appendMorePageList:(id)a0;
- (id)initWithBookConfig:(id)a0 DataEngine:(id)a1;
- (void)onConfigTextFontChange:(double)a0;
- (void)reloadChapterContentWithUrlString:(id)a0 completion:(id /* block */)a1;
- (void)jumpToChapterWithUrlString:(id)a0 Complete:(id /* block */)a1;
- (void)enterBookWithInitialChapterPageUrl:(id)a0 Complete:(id /* block */)a1;
- (void)switchPageInChapterWithPageUrl:(id)a0;
- (void)appendMoreChapterList:(id)a0;
- (void)readerDidCallbackLayoutChapter:(id)a0 chapterInfo:(id)a1 error:(id)a2;
- (void)onBDReaderLayoutAllTextPageCompletion:(id)a0 chapterInfo:(id)a1 readerModel:(id)a2 layoutProcessData:(id)a3;
- (void)onBDReaderLayoutCompletion:(id)a0 chapterInfo:(id)a1 readerModel:(id)a2 layoutProcessData:(id)a3;
- (void)onBDReaderDidLayoutTextPage:(id)a0 isLastPage:(BOOL)a1 chapterInfo:(id)a2 readerModel:(id)a3 layoutProcessData:(id)a4;
- (void).cxx_destruct;

@end
