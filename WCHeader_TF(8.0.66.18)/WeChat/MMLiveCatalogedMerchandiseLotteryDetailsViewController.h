@class NSString, MMLiveCatalogedMerchandiseLotteryDetailsView, MMLiveCatalogedMerchandiseLotteryInfo, UIView, MMLiveMulticastTimerToken, UIButton;
@protocol MMLiveCatalogedMerchandiseLotteryDetailsViewControllerDelegate;

@interface MMLiveCatalogedMerchandiseLotteryDetailsViewController : MMUIViewController <MMLiveCatalogedMerchandiseLotteryDetailsViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *lightDismissView;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryDetailsView *detailsView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) MMLiveCatalogedMerchandiseLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMLiveMulticastTimerToken *timerToken;
@property (weak, nonatomic) id<MMLiveCatalogedMerchandiseLotteryDetailsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)close;
- (BOOL)shouldHideNavigationBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)onCloseTapped;
- (void)onCatalogedMerchandiseLotteryDetailsViewMerchandiseDetailsButtonTapped:(id)a0;
- (void)onCatalogedMerchandiseLotteryDetailsViewParticipateButtonTapped:(id)a0;
- (void)onCatalogedMerchandiseLotteryDetailsViewDrawingDetailsButtonTapped:(id)a0;
- (void)onCatalogedMerchandiseLotteryDetailsView:(id)a0 disclaimerLinkTapped:(id)a1;
- (void).cxx_destruct;

@end
