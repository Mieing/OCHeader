@class BDPNovelComponentModel, BDPNovelContentMeta, BDPNovelContentPageContext, BDPNovelLayoutManager, BDPNovelContentViewControllerPool;
@protocol BDPNovelContainerDelegate;

@interface BDPNovelControllerContext : NSObject

@property (retain, nonatomic) BDPNovelContentViewControllerPool *controllerPool;
@property (retain, nonatomic) BDPNovelLayoutManager *layoutManager;
@property (weak, nonatomic) BDPNovelContentPageContext *changeHeadContext;
@property (weak, nonatomic) BDPNovelContentPageContext *changeTailContext;
@property (retain, nonatomic) BDPNovelComponentModel *model;
@property (readonly, nonatomic) long long lastTurnMode;
@property (nonatomic) long long turnMode;
@property (retain, nonatomic) BDPNovelContentMeta *currentDisplayContentMeta;
@property (weak, nonatomic) id<BDPNovelContainerDelegate> containerDelegate;

- (void)containerDidShow;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (void)silentRefreshCurrentContent:(id *)a0;
- (void)triggerForceRefreshWithCurrentContentMeta;
- (void)layoutContent:(id)a0;
- (void)dropAllLayoutResult;
- (id)getPageContextWithMeta:(id)a0 targetPage:(long long)a1 targetOffset:(long long)a2 targetType:(unsigned long long)a3 contentType:(unsigned long long)a4;
- (id)getContentViewControllerWithPageContext:(id)a0;
- (long long)calIndexForMeta:(id)a0 targetIndex:(long long)a1;
- (long long)calOffsetForMeta:(id)a0 targetOffset:(long long)a1;
- (id)getPageContextWithCurrentContext:(id)a0 readDirection:(long long)a1;
- (id)getNovelContentControllerWithCurrentContext:(id)a0 readDirection:(long long)a1;
- (id)getInsertViewControllerWithInsertPages:(id)a0 insertPageIndex:(long long)a1 originContext:(id)a2;
- (BOOL)canAddNextVCWithCurrent:(id)a0 nextMeta:(id)a1 direction:(long long)a2;
- (void)cancelAllLayoutOperation;
- (id)getContentViewControllerWithTargetMeta;
- (id)getContentViewControllerWithMeta:(id)a0 targetPage:(long long)a1 targetOffset:(long long)a2 targetType:(unsigned long long)a3 contentType:(unsigned long long)a4;
- (id)getContentPageControllerWithCurrentContext:(id)a0 numberOfCVsBettwen:(long long)a1 readDirection:(long long)a2;
- (BOOL)shouldSendOnScrollInVerticalMode:(id)a0 direction:(long long)a1;
- (id)collectContentIDsInContext;
- (BOOL)isReadyForRender;
- (void)noticeViewChanged:(id)a0 disappear:(BOOL)a1 direction:(long long)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
