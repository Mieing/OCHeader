@class AFDSnackBarCustomView, NSString, AFDSnackBar;

@interface AFDCloseFriendsShowSnackbarHelper : NSObject <AFDMomentNotesMessage, AFDCloseFriendsShowSendMessageHelperProtocol>

@property (retain, nonatomic) AFDSnackBar *afdSendMsgSnackBar;
@property (retain, nonatomic) AFDSnackBarCustomView *afdSendMsgSnackBarView;
@property (retain, nonatomic) AFDSnackBar *afdDraftSnackBar;
@property (copy, nonatomic) id /* block */ getContainerVCBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSendMessageNotification;
- (void)removeSendMessageNotification;
- (void)handleIMSendShareMessageNoti:(id)a0;
- (void)addPublishWorkNotification;
- (void)removePublishWorkNotification;
- (void)didAppendNotes:(id)a0 withPublishModel:(id)a1;
- (void)didPublishNotesFailedWithPublishModel:(id)a0;
- (void)onClickSnackBar:(id)a0;
- (void)retryPublishWithModel:(id)a0;
- (void)showDraftSnackBarWithPublishModel:(id)a0;
- (void).cxx_destruct;

@end
