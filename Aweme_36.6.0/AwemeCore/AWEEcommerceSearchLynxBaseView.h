@class UIViewController, NSString, NSDictionary, AWEDynamicPatchModel;
@protocol AWESearchDynamicEngineProtocol;

@interface AWEEcommerceSearchLynxBaseView : UIView <AWESearchDynamicEngineDelegate, AWEMSearchAutoPlayCard>

@property (nonatomic) BOOL shouldReuseLynxView;
@property (retain, nonatomic) id<AWESearchDynamicEngineProtocol> searchLynxEngine;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (nonatomic) BOOL isActive;
@property (nonatomic) double currPlaybackTime;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (copy, nonatomic) NSDictionary *extraPerfLog;
@property (copy, nonatomic) id /* block */ lynxElementDidMount;
@property (copy, nonatomic) id /* block */ lynxEngineDidUpdate;
@property (copy, nonatomic) id /* block */ lynxEngineDidPageUpdate;
@property (copy, nonatomic) id /* block */ lynxViewDidFailLoad;
@property (copy, nonatomic) id /* block */ lynxViewSizeChanged;
@property (copy, nonatomic) id /* block */ lynxElementWillEnterFullScreen;
@property (copy, nonatomic) id /* block */ lynxElementDidBecomeActive;
@property (copy, nonatomic) id /* block */ lynxElementDidResignActive;
@property (copy, nonatomic) id /* block */ lynxElementScrollToTop;
@property (copy, nonatomic) id /* block */ LynxElementScrollelement;
@property (copy, nonatomic) id /* block */ lynxWillTransitionBackToVideoFeed;
@property (copy, nonatomic) id /* block */ lynxDidTransitionBackToVideoFeed;
@property (copy, nonatomic) id /* block */ LynxElemenVideoPlayerDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;

+ (void)appendSearchCommonParamsWithModel:(id)a0 containerWidth:(double)a1 logData:(id)a2 isFromECommerce:(BOOL)a3 extraParams:(id)a4;

- (id)livePlayerView;
- (void)didEndShowing;
- (void)didStartShowing;
- (id)initWithShouldReuseLynxView:(BOOL)a0;
- (void)updateWithModel:(id)a0 containerWidth:(double)a1;
- (void)lynxEngineDidUpdate:(id)a0;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)addEcomLynxImageIfNeeded:(id)a0 dynamicPatchModel:(id)a1;
- (BOOL)isCommerceCard:(id)a0;
- (void)notifyAppear:(id)a0;
- (void)notifyDisappear:(id)a0;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)lynxEngineDidPageUpdate:(id)a0;
- (void)lynxEngineSearchLynxElementDidMount:(id)a0;
- (void)lynxEngineSearchLynxElementWillEnterFullScreen:(id)a0;
- (void)lynxEngineSearchLynxElementDidBecomeActive:(id)a0;
- (void)lynxEngineSearchLynxElementDidResignActive:(id)a0;
- (void)lynxEngineSearchLynxElementScrollToTopWithOffset:(double)a0 animated:(BOOL)a1;
- (void)lynxEngineSearchLynxElementScrollelement:(id)a0 toPosition:(id)a1 offset:(double)a2;
- (void)lynxEngineSearchLynxElemenVideoPlayerDidEnd:(id)a0;
- (void)lynxEngineWillTransitionBackToVideoFeed;
- (void)lynxEngineDidTransitionBackToVideoFeed;
- (BOOL)lynxEngineNotUpdataPlayerForTransition;
- (void)lynxEngine:(id)a0 updateAwemeList:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didResignActive;
- (void)dealloc;
- (id)activeView;
- (void)addObservers;
- (void)resetPlayer;
- (id)livePlayer;

@end
