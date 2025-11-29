@class CSJRenderStrategy, NSArray, NSString, CSJRenderResultModel, CSJRenderEngineViewModel;
@protocol CSJRenderEngineDelegate;

@interface CSJRenderEngine : NSObject <CSJRenderStrategyDelegate, BUDynamicRenderStrategyDelegate>

@property (copy, nonatomic) NSArray *renderStrategyArray;
@property (copy, nonatomic) NSArray *interceptArray;
@property (nonatomic) long long currentRenderIndex;
@property (nonatomic) long long themeStatusWhenStartRender;
@property (nonatomic) long long themeStatusWhenEndRender;
@property (nonatomic) BOOL haveRenderEnd;
@property (retain, nonatomic) CSJRenderResultModel *renderResultModel;
@property (retain, nonatomic) CSJRenderStrategy *resultRenderStrategy;
@property (retain, nonatomic) CSJRenderEngineViewModel *renderEngineViewModel;
@property (weak, nonatomic) id<CSJRenderEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renderEngineWithInfoViewModel:(id)a0 containerView:(id)a1 renderIndex:(long long)a2;

- (id)logKeyName;
- (void)buadNotifyKey_ThemeStatusChanged:(id)a0;
- (void)pbu_updateThemeWithNewType:(long long)a0;
- (void)internal_renderEngineLogWithKey:(id)a0 msg:(id)a1;
- (double)safeDelegate_renderTimeoutInRenderEngine:(id)a0;
- (void)pbu_renderWithIndex:(long long)a0;
- (void)internal_renderEngineLogWithKey:(id)a0 key2:(id)a1 msg:(id)a2;
- (void)safeDelegate_renderEngine:(id)a0 successView:(id)a1 error:(id)a2;
- (void)safeDelegate_renderEngine:(id)a0 report_webview_time_trackWithParams:(id)a1;
- (id)safeDelegate_nativeAdInRenderEngine:(id)a0;
- (id)safeDelegate_renderEngine:(id)a0 renderInteractionModel:(id)a1 clickExtraInfo:(id)a2;
- (long long)safeDelegate_playPercentInRenderEngine:(id)a0;
- (void)safeDelegate_renderEngine:(id)a0 reportError:(id)a1;
- (void)safeDelegate_renderEngine:(id)a0 reportLabel:(id)a1;
- (void)pbu_checkTheme;
- (id)initWithRenderEngineViewModel:(id)a0 renderStrategyArray:(id)a1;
- (double)renderTimeoutInDynamicRenderStrategy:(id)a0;
- (long long)playPercentInDynamicRenderStrategy:(id)a0;
- (void)dynamicRenderStrategy:(id)a0 reportError:(id)a1;
- (void)dynamicRenderStrategy:(id)a0 reportLabel:(id)a1;
- (BOOL)isRenderNative;
- (void)renderStrategy:(id)a0 successView:(id)a1 error:(id)a2;
- (void)renderStrategy:(id)a0 logWithMsg:(id)a1 isInternal:(BOOL)a2;
- (id)nativeAdInRenderStrategy:(id)a0;
- (id)renderStrategy:(id)a0 renderInteractionModel:(id)a1 clickExtraInfo:(id)a2;
- (void)renderStrategy:(id)a0 interceptArray:(id)a1;
- (void)renderStrategy:(id)a0 report_webview_time_trackWithParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)render;

@end
