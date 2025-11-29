@class AWEKefuBridgeEventPublisher, AWEKefuFloatingWindowBaseStateConfig, NSArray, NSString, AWEKefuFloatingWindowConfig, NSMutableArray, UIViewController;
@protocol AWEKefuFloatingWindowViewModelProtocol;

@interface AWEKefuFloatingWindowTask : NSObject <AWEKefuFloatingWindowViewModelDelegate, AWEUserMessage>

@property (retain, nonatomic) AWEKefuFloatingWindowConfig *config;
@property (retain, nonatomic) AWEKefuFloatingWindowBaseStateConfig *stateConfig;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) id<AWEKefuFloatingWindowViewModelProtocol> viewModel;
@property (retain, nonatomic) NSMutableArray *pageNameTrace;
@property (retain, nonatomic) AWEKefuBridgeEventPublisher *eventPublisher;
@property (retain, nonatomic) NSArray *signalListeners;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (nonatomic) unsigned long long windowPageHideType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)p_generateWindowWithConfig:(id)a0;
- (void)p_tryAppendPageTrace;
- (void)p_sendWindowClosedEventWithReason:(id)a0;
- (void)p_sendWindowShowEvent;
- (void)p_sendWindowHideEventWithReason:(id)a0;
- (void)p_tryShowVCIfNeededWithRecoverTypes:(id)a0 completion:(id /* block */)a1;
- (void)p_tryHideVCIfNeededWithCompletion:(id /* block */)a0;
- (id)p_getRootNavigationController:(id)a0;
- (void)hideWindowEntranceWithReason:(id)a0 completion:(id /* block */)a1;
- (void)p_sendWindowClickedEvent;
- (void)p_sendAccountChangedWithReason:(id)a0;
- (id)getWindowInfo;
- (void)onHiddenWithViewModel:(id)a0 type:(unsigned long long)a1;
- (void)onClickWithViewModel:(id)a0;
- (void)startWindowWithCompletion:(id /* block */)a0;
- (void)closeWindowWithCloseConfig:(id)a0 completion:(id /* block */)a1;
- (void)showWindowEntranceWithCompletion:(id /* block */)a0;
- (void)showWindowPageWithRecoverTypes:(id)a0 completion:(id /* block */)a1;
- (void)hideWindowPageWithCompletion:(id /* block */)a0;
- (void)changeWindowWithStateConfig:(id)a0 completion:(id /* block */)a1;
- (void)setDragDeleteText:(id)a0 completion:(id /* block */)a1;
- (void)didFinishSwitchAccount;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setup;

@end
