@class AWEPageContext, AWEAwemeModel;
@protocol AWECommentPreloadManagerProtocol, AWEPlayInteractionReusableSafeTimerProtocol, AWEPlayInteractionCommentPanelControllerProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionPreloadManager : NSObject

@property (nonatomic) double commentPreloadBeforeWidth;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (copy, nonatomic) id /* block */ videoPlayedPeriodHandle;
@property (nonatomic) BOOL needPreRenderCommentPanelByPlayTime;
@property (nonatomic) BOOL needPreRenderCommentPanelBySmart;
@property (weak, nonatomic) id<AWEPlayInteractionCommentPanelControllerProtocol, AWEPlayInteractionReusableSafeTimerProtocol, AWECommentPreloadManagerProtocol> commentPanelControllerDelegate;
@property (nonatomic) BOOL isNeedPreload;
@property (nonatomic) BOOL isWaitingDelay;

+ (unsigned long long)commentPreloadPredictOpportunity;

- (id)commentVC;
- (void)scheduleCommentPreload:(id)a0 model:(id)a1 context:(id)a2 opportunity:(unsigned long long)a3;
- (id)nonAutoInitCommentVC;
- (void)resetPreRenderParams;
- (void)smartPreloadComments:(id)a0 triggerEventType:(id)a1;
- (void)addVideoPlayedPeriodObserver;
- (void)preloadCommentWithThreshold:(float)a0;
- (void)preloadCommentDataWithThreshold:(float)a0;
- (void)preRenderCommentPanelIfNeededBySmart;
- (void)preRenderCommentPanel;
- (void)preRenderCommentPanelIfNeededByPlayTime;
- (void).cxx_destruct;
- (void)dealloc;

@end
