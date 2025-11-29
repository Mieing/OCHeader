@class AWEGCPVideoAnchorContext, NSString, AWEGCPGameDetailPreloadData;
@protocol IESGCPVideoPadSplitService, AWEGCPVideoContainerRouter;

@interface AWEGCPVideoAnchorWidget : IESGCPBaseWidget <AWEGCPVideoAnchorRouter, AWEGCPGameDetailPreloadDataDelegate>

@property (retain, nonatomic) AWEGCPGameDetailPreloadData *gameDetailPreloadData;
@property (retain, nonatomic) AWEGCPVideoAnchorContext *context;
@property (nonatomic) BOOL diOptEnable;
@property (weak, nonatomic) id<AWEGCPVideoContainerRouter> videoContainerRouter;
@property (retain, nonatomic) id<IESGCPVideoPadSplitService> padSplitHandler;
@property (retain, nonatomic) NSString *preloadAnnieXSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (id)awemeModel;
- (void)anchorDidClickedWithContext:(id)a0;
- (id)videoAnchorTrackExtraParams;
- (void)anchorViewWillShowWithContext:(id)a0;
- (id)currentAnchorEnterMethod;
- (id)currentAnchorEnterSubMethod;
- (id)currentAnchorPromoteSceneSubDict;
- (void)widgetDidCreate;
- (void)widgetBindService;
- (void)didGameDetailDataStartPreload;
- (void)updatePromoteGameMetaData;
- (void)preloadAllPageInOptTask;
- (id)preloadPuzzleContextPageIn;
- (void)preloadTemplateRenderPageIn;
- (void)preloadPuzzleBridgePageIn;
- (void)annieLynxWarmupWith:(id)a0;
- (void)preloadLynxResources:(id)a0;
- (void)asyncPreloadPageIn_V2;
- (void)asyncPreloadPageIn;
- (void)preloadGameDetailDataIfNeeded;
- (id)getDetailJumpUrl;
- (void)jumpDetail;
- (BOOL)_needJumpCGGame;
- (id)getGameCPJumpUrl;
- (void)handleGameCPCloseGameNotification:(id)a0;
- (void)triggerDataConnection;
- (BOOL)isDataConnectionContentWithModel:(id)a0;
- (BOOL)hasBigMiniGame;
- (void)trackAnchorOpenUrl;
- (id)getPageAttrReportParams;
- (id)getSubSceneStr;
- (void)reportGameMetaDataNullLog;
- (id)preloadAnnieXCardPageIn;
- (void).cxx_destruct;
- (void)dealloc;

@end
