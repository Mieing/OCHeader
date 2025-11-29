@class WCPlayLiveWithoutLoginHeadView, WCPlayLiveWithoutLoginViewModel, CXCallObserver, NSString, UIView, WCLiveBlurButton, TRTCCdnPlayerManager;

@interface WCPlayLiveWithoutLoginViewController : MMCPUIViewController <TXLivePlayListener, CXCallObserverDelegate>

@property (retain, nonatomic) TRTCCdnPlayerManager *cdnPlayer;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) WCPlayLiveWithoutLoginHeadView *headView;
@property (retain, nonatomic) WCLiveBlurButton *closeButton;
@property (retain, nonatomic) WCPlayLiveWithoutLoginViewModel *viewModel;
@property (nonatomic) BOOL isIdleTimerDisabledBefore;
@property (nonatomic) BOOL hasSetIdleTimerDisabled;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)createCdnPlayer;
- (void)layoutViews;
- (void)registerCallCenter;
- (void)stop;
- (void)onClose:(id)a0;
- (void)internalClose;
- (void)onLiveClose;
- (void)updateViewModel:(id)a0;
- (void)setIdleTimeDisable:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)hidesStatusBar;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)onPlayEvent:(int)a0 withParam:(id)a1;
- (void)onNetStatus:(id)a0;
- (void).cxx_destruct;

@end
