@class UIView, MJShootRedPacketResponseInfo, MJShootComposingViewModel, NSString, MJShootToastManager, MMUIView, WCProgressMaskView, MMUIButton, MJGradientView;
@protocol MJShootSimplePreviewViewControllerDelegate;

@interface MJShootSimplePreviewViewController : MMUIViewController <MJShootPreviewViewControllerProtocol>

@property (retain, nonatomic) UIView *renderView;
@property (retain, nonatomic) WCProgressMaskView *progressMaskView;
@property (retain, nonatomic) MMUIView *playerBackgroundView;
@property (retain, nonatomic) MMUIButton *exitButton;
@property (retain, nonatomic) MMUIButton *completeButton;
@property (retain, nonatomic) MJGradientView *bottomGradientView;
@property (retain, nonatomic) MMUIView *bottomBar;
@property (readonly, nonatomic) MJShootRedPacketResponseInfo *responseInfo;
@property (retain, nonatomic) MJShootToastManager *shootToastManager;
@property (readonly, nonatomic) MJShootComposingViewModel *viewModel;
@property (weak, nonatomic) id<MJShootSimplePreviewViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 responseInfo:(id)a1;
- (void)dealloc;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupRenderView;
- (void)setupExitButton;
- (void)setupBottomBar;
- (void)exitButtonTouchUpInside:(id)a0;
- (void)_handleExitAction;
- (void)completeButtonTouchUpInside:(id)a0;
- (void)_startExportingVideoWithCompletion:(id /* block */)a0;
- (void)handleShootPreviewExportProgressNoti:(id)a0;
- (void)onApplicationWillResignActiveNotification:(id)a0;
- (void)onApplicationDidBecomeActiveNotification:(id)a0;
- (void)handleOnAIGCRequestConditionNotMet:(id)a0;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (struct CGSize { double x0; double x1; })_calculateRenderViewSize;
- (void).cxx_destruct;

@end
