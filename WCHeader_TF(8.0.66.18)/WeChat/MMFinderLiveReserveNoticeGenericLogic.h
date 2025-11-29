@class WCLiveActionSheet, WCFinderBaseCgi, MMUIViewController, FinderLiveNoticeInfo, NSString, MMFinderLiveBuyTicketHandle, WCFinderContact;

@interface MMFinderLiveReserveNoticeGenericLogic : NSObject <WCActionSheetDelegate>

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (weak, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle;
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

- (void)process:(id)a0 handler:(id)a1 vc:(id)a2 contact:(id)a3 reportScene:(int)a4 scene:(unsigned int)a5 completionBlock:(id /* block */)a6;
- (void)onClickFreeLiveNotice:(id)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)onClickNeedPayLiveNotice:(id)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)hadndleBuySuccess:(id)a0 isFromDetailView:(BOOL)a1;
- (void)showConcertTicketConfirmed:(id)a0;
- (void)handleSubscribeAction:(BOOL)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)showActionSheetForUnReserveWithCompletionBlock:(id /* block */)a0;
- (void)subscribeNotice:(BOOL)a0 isFromDetailView:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)changeNoticeStatus;
- (void).cxx_destruct;

@end
