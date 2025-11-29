@class NSMutableArray, WAAppTask;
@protocol WAWebViewPageMgrDelegate;

@interface WAWebViewPageMgr : MMObject

@property (retain, nonatomic) NSMutableArray *pages;
@property (retain, nonatomic) NSMutableArray *removedPages;
@property (retain, nonatomic) NSMutableArray *stackPages;
@property (retain, nonatomic) NSMutableArray *releasePool;
@property (retain, nonatomic) NSMutableArray *dissociativePool;
@property (weak, nonatomic) WAAppTask *task;
@property (weak, nonatomic) id<WAWebViewPageMgrDelegate> delegate;

- (id)initWithTask:(id)a0;
- (void)pushWebViewPage:(id)a0;
- (void)popWebViewPage:(id)a0;
- (void)pageStackDidUpdate;
- (void)pushDissociativeWebViewPage:(id)a0;
- (void)popDissociativeWebViewPage:(id)a0;
- (void)checkStack;
- (void)checkReleasePool;
- (unsigned long long)pagesCount;
- (unsigned long long)webviewInPagesIndex:(id)a0;
- (id)firstPage;
- (id)lastPage;
- (id)topMostPage;
- (id)prevPageFrom:(id)a0;
- (BOOL)isTopMostPage:(id)a0;
- (id)findPageBeforePage:(id)a0;
- (id)allPages;
- (void)removeAllPageDelegates;
- (void)popAllWebViewPage;
- (void)popAllDissociativeWebview;
- (id)pagesStatusDescription;
- (unsigned int)contentProcessTerminatedPagesCount;
- (unsigned int)manuallyTerminatedPagesCount;
- (unsigned int)healthyPagesCount;
- (unsigned int)stackPagesCount;
- (unsigned long long)currentStackMode;
- (void).cxx_destruct;

@end
