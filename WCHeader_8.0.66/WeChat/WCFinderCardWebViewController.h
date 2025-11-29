@class NSString, NSDictionary, WCFinderEmptyTipsView, MMWebViewController, WCFinderJumpInfo;
@protocol WCFinderCardWebViewControllerDelegate;

@interface WCFinderCardWebViewController : MMUIHalfScreenViewController <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCFinderHalfScreenProtocol>

@property (retain, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) long long viewControllerCount;
@property (nonatomic) unsigned long long jumpInfoPos;
@property (nonatomic) double heightRatio;
@property (weak, nonatomic) id<WCFinderCardWebViewControllerDelegate> finderDelegate;
@property (retain, nonatomic) NSDictionary *envDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightInFullScreenMode;

- (id)init;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (void)viewWillPush:(BOOL)a0;
- (void)viewWillPresent:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)willJumpToOthers;
- (BOOL)useTransparentNavibar;
- (void)updateWithJumpInfo:(id)a0 params:(id)a1;
- (void)updateWithUrl:(id)a0;
- (void)setIsFixedHeight:(BOOL)a0;
- (void)contentTopDidChangeFromTop:(double)a0 toTop:(double)a1;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (BOOL)needCloseOnOrientationChanged;
- (void)initWebView;
- (void)updateFinderUI;
- (void)reportUniversalJumperWithJumperInfo:(id)a0 eventType:(unsigned long long)a1;
- (void)onWebViewDidReceiveResponse:(id)a0 Response:(id)a1;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (void).cxx_destruct;

@end
