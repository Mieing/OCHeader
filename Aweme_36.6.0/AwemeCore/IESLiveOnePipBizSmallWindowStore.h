@class RACDisposable, NSString, IESLiveOnePipFragment, UIViewController;

@interface IESLiveOnePipBizSmallWindowStore : NSObject <IESLiveNavigationDelegateProtocol, IESLivePaidStreamAction, IESLiveSmallWindowActions, IESLiveOnePipSmallWindowStoreProtocol>

@property (retain, nonatomic) RACDisposable *methodDisposable;
@property (weak, nonatomic) UIViewController *audienceVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLiveOnePipFragment *hostFragment;

- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)bindService;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (id)smallWindowService;
- (void)unmount;
- (void)smallWindowDidTap;
- (void)smallWindowTrackWithEvent:(id)a0 extraParam:(id)a1 fromPage:(id)a2;
- (BOOL)outManage;
- (BOOL)vcIsLive:(id)a0;
- (void)didEnterSupportSmallWindowVC:(BOOL)a0 from:(id)a1;
- (void)willLeaveSupportSmallWindowVC:(BOOL)a0;
- (void)willEnterSupportSmallWindowVC:(BOOL)a0;
- (void)didLeaveSupportSmallWindowVC:(BOOL)a0;
- (void)backToRoom;
- (void)trackWithEvent:(id)a0 extraParam:(id)a1 eventContext:(id)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)create;
- (void)willDisappear;
- (void)willAppear;
- (void)mount;

@end
