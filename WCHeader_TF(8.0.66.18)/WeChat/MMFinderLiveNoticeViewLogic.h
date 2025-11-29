@class MMFinderLiveBuyTicketHandle, FinderLiveNextLiveNotificationInfo, FinderLiveNoticeInfo, NSString, FinderLiveNoticeListInfo, WCFinderContact;
@protocol MMFinderLiveNoticeViewLogicDelegate;

@interface MMFinderLiveNoticeViewLogic : NSObject <MMFinderLiveNoticeDetailsViewControllerDelegate, WCFinderLiveNoticeViewDelegate>

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveNoticeListInfo *noticeList;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (nonatomic) BOOL isAuthorPerspective;
@property (retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle;
@property (weak, nonatomic) id<MMFinderLiveNoticeViewLogicDelegate> delegate;
@property (readonly, nonatomic) NSString *anchorUserName;
@property (nonatomic) int scene;
@property (nonatomic) unsigned int reserveScene;
@property (nonatomic) long long sourceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnchorContact:(id)a0 isAuthorPerspective:(BOOL)a1 noticeInfo:(id)a2 noticeList:(id)a3 nextLiveNoticeInfo:(id)a4;
- (void)dealloc;
- (void)fetchLiveNoticeListWithCompleteBlock:(id /* block */)a0;
- (void)onReserveLiveButtonClickedWithNoticeInfo:(id)a0;
- (void)onShowMoreNoticesButtonClickedWithNoticeList:(id)a0;
- (void)openNoticeListPageSheetWithNoticeListInfo:(id)a0 anchorContact:(id)a1;
- (id)getViewController;
- (void)reserveNextLiveNotice:(id)a0 isReserve:(BOOL)a1 completeBlock:(id /* block */)a2;
- (void)realReserveNextLiveWithNoticeView:(id)a0 isReserve:(BOOL)a1;
- (void)modLiveNoticeTopStateWithNotice:(id)a0 completeBlock:(id /* block */)a1;
- (void)createAndShowLiveNoticeQRCodeWithInfo:(id)a0 anchorContact:(id)a1;
- (void)showConcertTicketWithNoticeInfo:(id)a0;
- (void)onClickFreeLiveNoticeView:(id)a0;
- (void)onClickNeedPayLiveNoticeView:(id)a0;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)a0;
- (void)didFinishModLiveNoticeWithInfo:(id)a0;
- (void)onLiveNoticeViewActionButtonClicked:(id)a0;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)a0;
- (void)onLiveNoticeViewMoreNoticesButtonClicked:(id)a0;
- (void)onLiveNoticeViewNextLiveNoticesButtonClicked:(id)a0;
- (void)onLiveNoticeViewTopNoticeButtonClicked:(id)a0;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 isTop:(BOOL)a1 noticeId:(id)a2;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)a0;
- (void)onFinderLiveDidCreateNoticeInfo:(id)a0;
- (void).cxx_destruct;

@end
