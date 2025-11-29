@class WCFinderMembershipPaymentNoticeDetailView, NSString;

@interface WCFinderMembershipPaymentNoticeView : MMPageSheetBaseViewController <WCFinderMembershipPaymentNoticeDetailViewDelegate>

@property (retain, nonatomic) WCFinderMembershipPaymentNoticeDetailView *panelDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)a0;
- (double)contentHeaderHeight;
- (double)contentFooterHeight;
- (void)panelLayoutFinished;
- (void)panelDidClickLink:(id)a0;
- (void).cxx_destruct;

@end
