@class NSString, WCFinderDataItem, NSDate, UIViewController;

@interface MMLiveResumeManager : MMUserService <MMTipsViewControllerDelegate, MMServiceProtocol>

@property (nonatomic) BOOL hasCheckedAbnormal;
@property (nonatomic) BOOL isFinderLiving;
@property (retain, nonatomic) NSDate *lastFinderLivingTime;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)markFinderLiving;
- (void)unmarkFinderLiving;
- (BOOL)isFinderLiveAbnormal;
- (void)checkAbnormalFinderLiveWithCompletionHandler:(id /* block */)a0;
- (BOOL)showResumeAlertViewFromViewController:(id)a0;
- (BOOL)resumeFinderLiveFromViewController:(id)a0;
- (BOOL)validateFinderDataItem:(id)a0;
- (BOOL)validatePresentingViewController:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void).cxx_destruct;

@end
