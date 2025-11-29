@class NSString, MMFinderFeedNoticeModel;
@protocol MMFinderFeedNoticeLogicDelegate;

@interface MMFinderFeedNoticeLogic : NSObject <WCActionSheetDelegate>

@property (retain, nonatomic) MMFinderFeedNoticeModel *model;
@property (weak, nonatomic) id<MMFinderFeedNoticeLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void)updateWithModel:(id)a0;
- (void)liveNoticeUserame:(id)a0 clickLiveNoticeInfo:(id)a1 needHalfScreen:(BOOL)a2 isFromDetailView:(BOOL)a3;
- (void)onFinderJumpInfoView:(id)a0 finderUsername:(id)a1 showLiveNoticeInfo:(id)a2;
- (void)preLoadConcertPageSheet:(id)a0;
- (void)showLiveNoticePageSheetFromJumpInfoView:(id)a0 withFinderUsername:(id)a1 noticeInfo:(id)a2;
- (void)showNoticeDetailViewFromJumpInfoView:(id)a0 withFinderUsername:(id)a1 noticeInfo:(id)a2;
- (void)audienceOperateNoticeWithNotice:(id)a0 anchorContact:(id)a1;
- (void)hideLiveAppointment;
- (void)updateNoticeDetailView:(id)a0;
- (void)onClickFreeLiveNotice:(id)a0 username:(id)a1 isFromDetailView:(BOOL)a2;
- (void)onClickNeedPayLiveNotice:(id)a0 username:(id)a1 needHalfScreen:(BOOL)a2 isFromDetailView:(BOOL)a3;
- (void)liveNoticeUserame:(id)a0 clickLiveNoticeInfo:(id)a1 opType:(unsigned long long)a2 notShowAlertView:(BOOL)a3 isFromDetailView:(BOOL)a4;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)a0;
- (void)checkAndPresentLiveConcertTicketWithNoticeInfo:(id)a0 reportingScene:(unsigned long long)a1;
- (void)presentLiveConcertTicketForNoticeInfo:(id)a0 reportingScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
