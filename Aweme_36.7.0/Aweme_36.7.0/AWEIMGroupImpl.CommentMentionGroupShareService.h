@interface AWEIMGroupImpl.CommentMentionGroupShareService : HTSService <AWEIMCommentMentionGroupShareServiceInterface> {
    void /* unknown type, empty encoding */ commentMentionGroupStyleKey;
    void /* unknown type, empty encoding */ commentMentionGroupShareToGroupNotStrictModeKey;
    void /* unknown type, empty encoding */ commentMentionGroupShareToGroupNotStrictModeGroupCountKey;
}

- (BOOL)basicCanShowMentionGroupSnackBarWithInfoConfig:(id)a0;
- (BOOL)hitButtonStyleExp;
- (id)commentMentionGroupShareEnableEnterFromList;
- (void)showCommentMentionGroupSnackBarWithInfoConfig:(id)a0 userArray:(id)a1;
- (id)createGroupShareBodyStringWithUserArray:(id)a0;
- (id)createGroupShareContextWithShareContextConfig:(id)a0;
- (BOOL)commentMentionGroupShareEnableShowFullTextInfo;
- (void)getMentionListWithTextExtraInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkCommentTextLengthWithLength:(long long)a0;
- (id)displayNameWithUser:(id)a0;
- (void)createGroupShareWithShareContext:(id)a0 shareText:(id)a1 inviteUserArray:(id)a2 jumpConvFinishBlock:(id /* block */)a3 sendMessageCompletion:(id /* block */)a4;
- (void)showSelectGroupVCWithCids:(id)a0 shareText:(id)a1 shareContext:(id)a2 jumpConvFinishBlock:(id /* block */)a3 currentSelectConvBlock:(id /* block */)a4;
- (void)hasExistGroupWithUids:(id)a0 completion:(id /* block */)a1;
- (void)shareWithShareContext:(id)a0 shareText:(id)a1 shareCidList:(id)a2 jumpConvFinishBlock:(id /* block */)a3;
- (void)onAddCommentNotificationWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
