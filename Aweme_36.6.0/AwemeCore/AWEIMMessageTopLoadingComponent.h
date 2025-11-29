@class NSTimer, AWEIMMessageTopLoadingView, NSString;
@protocol AWEIMMessageListLayoutInterface;

@interface AWEIMMessageTopLoadingComponent : AWEIMComponentBase <AWEIMMessageBaseVCLayoutAction>

@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (retain, nonatomic) AWEIMMessageTopLoadingView *loadingView;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void)p_showLoadingView;
- (void)handleRecentLinkRequestStart:(id)a0;
- (void)handleRecentLinkRequestEnd:(id)a0;
- (void)p_timeoutResetStatus;
- (void)p_dismissLoadingView;
- (void)handleConvLinkStart:(id)a0;
- (void)handleConvLinkEnd:(id)a0;
- (id)p_logInfo;
- (void)p_delayShowLoadingViewIfNeeded;
- (id)createLoadingViewIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
