@class NSString, UIViewController, NSMutableDictionary;
@protocol AWESearchPredictFetchProtocol;

@interface AWETemplateHotspotViewModel : AWETemplateBaseViewModel <AWETemplateHotspotViewActionProtocol>

@property (retain, nonatomic) UIViewController<AWESearchPredictFetchProtocol> *searchViewController;
@property (nonatomic) long long preloadResource;
@property (copy, nonatomic) NSString *prefetchTag;
@property (retain, nonatomic) NSMutableDictionary *preloadDict;
@property (nonatomic) long long ackCountdownTime;
@property (nonatomic) double preloadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_didEndDisplayingBeforeReset;
- (id)commonParams;
- (id)p_aiStickerId:(id)a0;
- (BOOL)p_isAigc:(id)a0;
- (BOOL)p_isAiDance:(id)a0;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (id)paramsForTemplateViewTransfer;
- (BOOL)canShowWhenWillDisplay;
- (void)viewController_viewWillDisplay;
- (id)getSearchViewController;
- (long long)getPreloadResource;
- (id)getPrefetchTag;
- (BOOL)p_enableFurionSmart;
- (BOOL)p_enableTouchPreload;
- (void)resetSearchViewController;
- (void)viewDidTriggerByAddingQueryDict:(id)a0;
- (void)setTouchNoPreloadReason:(id)a0;
- (void)createSearchVCWithPreloadResource:(long long)a0;
- (id)trackerParamsWithActionType:(id)a0;
- (void)p_preloadWithFurionSmart;
- (void)p_preloadWithServerSmart;
- (void)trackForPreloadResult;
- (double)p_probabilityA;
- (BOOL)p_enableIsLongVideo;
- (long long)p_videoLengthThreshold;
- (void).cxx_destruct;
- (id)generateSchema;

@end
