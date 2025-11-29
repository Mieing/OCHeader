@class NSString, NSDictionary, NSNumber, AWEUserModel;

@interface AWEIMFollowRequestReminderView : AWEUserRecommendBaseCellView <AWEUserMessage, AFDIMGreetHelperMessage, AWEIMFollowRequestReminderProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *noticeID;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL needsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)a0 user:(id)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)closeBtnClicked;
- (void)actionBtnClicked;
- (void)configUI;
- (void)configWithUser:(id)a0;
- (id)__extraTrackParams;
- (void)didFinishShowSnackBarWithUser:(id)a0 error:(id)a1;
- (void)animateWithType:(BOOL)a0;
- (void)trackRequestCellWithEventType:(id)a0;
- (id)__relationContext;
- (void)__updateActionButtonStates;
- (BOOL)__shouldDisappear;
- (void)showOn:(id)a0 user:(id)a1 noticeID:(id)a2 extraTrackParams:(id)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)dealloc;

@end
