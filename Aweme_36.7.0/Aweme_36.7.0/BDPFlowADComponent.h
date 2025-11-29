@class NSString, UIView, BDPWebViewPage, BDPFlowAd;
@protocol BDPFlowAdViewProtocol;

@interface BDPFlowADComponent : UIView <BDPWebviewPageScrollDelegate, BDPAppRouteChangeMessage>

@property (retain, nonatomic) UIView<BDPFlowAdViewProtocol> *adView;
@property (retain, nonatomic) BDPFlowAd *flowAd;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) long long pageID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) UIView *blockMaskView;
@property (weak, nonatomic) UIView *originParentView;
@property (weak, nonatomic) UIView *originWebParentView;
@property (nonatomic) long long timeout;
@property (nonatomic) BOOL isEverBlocked;
@property (nonatomic) BOOL isPlay;
@property (nonatomic) BOOL isEverPlayed;
@property (nonatomic) BOOL isBlock;
@property (nonatomic) BOOL playingWhenEnterBack;
@property (nonatomic) double lastY;
@property (nonatomic) double lastX;
@property (nonatomic) BOOL everSendCrossLineEvent;
@property (retain, nonatomic) UIView *tempBlockView;
@property (weak, nonatomic) BDPWebViewPage *webviewPage;
@property (copy, nonatomic) NSString *scrollContainerType;
@property (nonatomic) BOOL updateFromRuntime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)updateFlowAdView:(id)a0;
- (void)webviewPageDidScroll:(id)a0;
- (id)initWithPageID:(long long)a0 flowAd:(id)a1 componentId:(id)a2;
- (void)setBlockState:(BOOL)a0;
- (void)_onStateAdViewChange:(id)a0;
- (BOOL)isADMatchTheCenter;
- (BOOL)forceFlowAdCrossTheCenterLine;
- (BOOL)isADAppearOnScreen;
- (void)_onStateAdPlayState:(id)a0;
- (void)updatePerformanceIfneeded:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
