@class WCPreGiftCardData, NSString, WCGiftCardDetailView, WCGiftCardEnvelopeView, UIScrollView, WCGiftCardData, WCBatchViewCardHelper;

@interface WCGiftCardViewController : MMUIViewController <CAAnimationDelegate, WCGiftCardDetailViewDelegate, WCBatchViewCardHelpDelegate>

@property (retain, nonatomic) WCPreGiftCardData *preGiftCard;
@property (retain, nonatomic) WCGiftCardData *giftCard;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) WCGiftCardEnvelopeView *envelopeView;
@property (retain, nonatomic) WCGiftCardDetailView *detailView;
@property (nonatomic) long long fromScence;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCBatchViewCardHelper *viewCardHelp;
@property (retain, nonatomic) NSString *currentUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreGiftCardData:(id)a0;
- (id)initWithBizUin:(unsigned int)a0 orderId:(id)a1;
- (id)initWithGiftCardData:(id)a0;
- (void)showInViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)showEnvelopseAnimation;
- (void)handleEnvelopse;
- (void)handleLoading;
- (void)handleFinshed;
- (void)showEnvelopeView;
- (void)closeEnvelopeAndSelf;
- (void)configEnvelopeViewFrame;
- (void)showDetailView;
- (void)configDetailViewFrame;
- (void)viewDidLayoutSubviews;
- (void)showConfirmAlertWithTitle:(id)a0 sel:(SEL)a1;
- (void)popCon;
- (BOOL)useTransparentNavibar;
- (void)jumpButtonDidClikced;
- (void)operationButtonDidClikced;
- (void)detailViewCenterButtonClick;
- (void)openAppBranWithUserName:(id)a0 brandPath:(id)a1;
- (void)openUrl:(id)a0;
- (void)openUrl:(id)a0 returnBlock:(id /* block */)a1;
- (void)jumbToDetailCard;
- (id)getDelegateViewController;
- (void)onBatchViewCardReturn;
- (void)onBack;
- (void)dismissSelf;
- (void)handleJumpNativeUrl:(id)a0;
- (void)enterCardHomePage;
- (void)enterCouponListPage;
- (void).cxx_destruct;

@end
