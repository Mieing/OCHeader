@interface AWECommentInputViewSwiftImpl.CommentInputRiskManager : NSObject <TTTAttributedLabelDelegate, DUXAlertDialogDelegate> {
    void /* unknown type, empty encoding */ isShowingRiskUserAlert;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ hasShownRiskUserAlert;
    void /* unknown type, empty encoding */ newRiskUserInfoDic;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userGuideAlert;
    void /* unknown type, empty encoding */ oldRiskUserInfoDic;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsLabel;
}

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)alertDialogDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
