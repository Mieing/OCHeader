@class CSJRenderEngineViewModel, UIView, CSJRenderResultModel, CSJDynamicRenderTimeOutControlServer;

@interface CSJRenderStrategy : NSObject

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL haveRenderResult;
@property (retain, nonatomic) CSJDynamicRenderTimeOutControlServer *timeOutControlServer;
@property (retain, nonatomic) CSJRenderResultModel *renderResultModel;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) CSJRenderEngineViewModel *renderEngineViewModel;

- (id)initWithRenderEngineViewModel:(id)a0 containerView:(id)a1;
- (void)safeDelegate_renderStrategy:(id)a0 logWithMsg:(id)a1 isInternal:(BOOL)a2;
- (void)invokeWebEvent:(id)a0 data:(id)a1;
- (void)safeDelegate_renderStrategy:(id)a0 interceptArray:(id)a1;
- (void)reportRenderSuccessWithInfo:(id)a0;
- (void)safeDelegate_renderStrategy:(id)a0 report_webview_time_trackWithParams:(id)a1;
- (void)safeDelegate_renderStrategy:(id)a0 successView:(id)a1 error:(id)a2;
- (void)updateWithThemeStatus:(long long)a0;
- (void)detectBlankIfNeed;
- (void)reportShowEventIfNeed;
- (void)reportMaterialMetaIfNeedWithRelatedMaterialMetaJson:(id)a0;
- (void)refreshWKWebViewIfNeed;
- (void)sendPlayableStateChange:(BOOL)a0 reduceDuration:(long long)a1;
- (void)sendShowSkipInLiveScene:(BOOL)a0;
- (void)sendShowToast:(id)a0;
- (id)logKeyName;
- (void)showChangedWithOriginShow:(BOOL)a0 destShow:(BOOL)a1;
- (long long)playerTotalTime;
- (id)safeDelegate_nativeAdInRenderStrategy:(id)a0;
- (id)safeDelegate_renderStrategy:(id)a0 renderInteractionModel:(id)a1 clickExtraInfo:(id)a2;
- (long long)renderType;
- (void).cxx_destruct;
- (void)render;
- (double)playerCurrentTime;

@end
