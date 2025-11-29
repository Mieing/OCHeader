@class FinderLiveNoticeInfo, MMFinderLivePurchaseConcertTicketView, MMFinderLiveTaskId, MMUIViewController, MMPageSheetAdapter, WCLiveActionSheet, NSString, MMFinderLiveFeedNoticeDetailView, MMFinderLiveNoticeDetailPayView, WCFinderBaseCgi, NSData, MMWebViewController, WCFinderContact;

@interface MMFinderLiveReserveNoticeLogic : NSObject <WCActionSheetDelegate, WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate, MMWebPageSheetDelegate>

@property (retain, nonatomic) MMFinderLiveNoticeDetailPayView *noticePayView;
@property (weak, nonatomic) MMFinderLiveFeedNoticeDetailView *feedNoticeDetailView;
@property (retain, nonatomic) MMFinderLivePurchaseConcertTicketView *purchaseConcertTicketView;
@property (nonatomic) BOOL needHalfScreen;
@property (weak, nonatomic) MMUIViewController *showToastViewController;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (copy, nonatomic) id /* block */ showTicketBlock;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *adapterUrl;
@property (retain, nonatomic) MMPageSheetAdapter *rootPageSheet;
@property (retain, nonatomic) MMWebViewController *webVC;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) WCLiveActionSheet *actionSheet;
@property (retain, nonatomic) WCFinderBaseCgi *reserveNoticeCGI;
@property (nonatomic) unsigned int scene;
@property (nonatomic) int reportScene;
@property (nonatomic) BOOL suppressSuccessToasts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNoticeNeedPayment:(id)a0;
+ (BOOL)hasNoticePay:(id)a0;
+ (BOOL)isConcert:(id)a0;
+ (BOOL)canPay:(id)a0;

- (void)startReserveProcess:(id)a0 fromVC:(id)a1 contact:(id)a2 reportScene:(int)a3 scene:(unsigned int)a4 completionBlock:(id /* block */)a5;
- (void)onClickFreeLiveNotice:(id)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)onClickNeedPayLiveNotice:(id)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)hadndleBuySuccess:(id)a0 isFromDetailView:(BOOL)a1;
- (void)showConcertTicketConfirmed:(id)a0;
- (void)handleSubscribeAction:(BOOL)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)showActionSheetForUnReserveWithCompletionBlock:(id /* block */)a0;
- (void)subscribeNotice:(BOOL)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)changeNoticeStatus;
- (void)requestLiveGetPaymentItems:(id)a0 needHalfScreen:(BOOL)a1 isTicket:(BOOL)a2 showToastViewController:(id)a3 liveCookies:(id)a4 taskId:(id)a5 sessionBuffer:(id)a6 showTicketBlock:(id /* block */)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
- (void)showRequestLiveGetPaymentItemsLoading;
- (void)showTicketClick:(BOOL)a0;
- (void)handleFailure:(int)a0 errorMsg:(id)a1;
- (void)showLiveNoticePayViewWithTiersViewModel:(id)a0 needHalfScreen:(BOOL)a1 isTicket:(BOOL)a2;
- (void)handleLiveNoticePayViewWithTiersViewModel:(id)a0 needHalfScreen:(BOOL)a1 isTicket:(BOOL)a2;
- (void)starOrderWithTiersViewModel:(id)a0;
- (void)consumeCoinWithProductId:(id)a0 billNo:(id)a1 respBuff:(id)a2;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)onCoinButtonClicked;
- (void)handleError;
- (void)openWebPageSheetWithParams:(id)a0 scene:(long long)a1 showInView:(id)a2;
- (id)preLoadConcertPageSheetWithParams:(id)a0;
- (id)createWebPageSheetNavWithParams:(id)a0 preload:(BOOL)a1;
- (void)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 actionBlock:(id /* block */)a5 unLikeBlock:(id /* block */)a6 receiveCouponBlock:(id /* block */)a7;
- (void)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 showHideButton:(BOOL)a5 reportScene:(int)a6 actionBlock:(id /* block */)a7 unLikeBlock:(id /* block */)a8 receiveCouponBlock:(id /* block */)a9;
- (void)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 showHideButton:(BOOL)a5 showColumnView:(BOOL)a6 reportScene:(int)a7 actionBlock:(id /* block */)a8 unLikeBlock:(id /* block */)a9 receiveCouponBlock:(id /* block */)a10;
- (void)exitShowLiveNoticeDetailIfNeeded:(BOOL)a0;
- (void)updateShowingLiveNoticeDetail:(id)a0 anchorContact:(id)a1 scene:(long long)a2;
- (void)refreshDetailView;
- (void).cxx_destruct;

@end
