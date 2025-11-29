@interface AWEBookImpl.BookDetailPageCommentController : NSObject <AFDBookCommentControllerProtocol, DUXAlertDialogDelegate, TTTAttributedLabelDelegate, AWECommentInputViewManagerDelegate> {
    void /* unknown type, empty encoding */ commentRequestModel;
    void /* unknown type, empty encoding */ commentInfo;
    void /* unknown type, empty encoding */ commentID;
    void /* unknown type, empty encoding */ riskUserInfoDic;
    void /* unknown type, empty encoding */ hasShownRiskUserAlert;
    void /* unknown type, empty encoding */ isShowingRiskUserAlert;
    void /* unknown type, empty encoding */ exitBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsLabel;
}

- (void)showBookCommentInput:(id)a0 extraDict:(id)a1;
- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)alertDialogDidDismiss:(id)a0;
- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (BOOL)custom_commentInputViewCustomSendAction:(id)a0;
- (BOOL)custom_commentInputViewShouldBeginEditing:(id)a0;
- (BOOL)custom_commentInputViewShouldReturn:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
