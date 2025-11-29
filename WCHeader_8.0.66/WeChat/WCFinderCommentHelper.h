@interface WCFinderCommentHelper : NSObject

+ (id)getDetailPageCommentCountDescriptionWithCommentCount:(long long)a0 authorScene:(BOOL)a1;
+ (id)getCommentCountDescriptionWithDataItem:(id)a0 commentCount:(long long)a1 authorScene:(BOOL)a2;
+ (id)getSuffixCommentCountDescriptionWithDataItem:(id)a0 commentCount:(long long)a1 authorScene:(BOOL)a2 selectedType:(unsigned long long)a3;
+ (id)getCommentCountValueStrWithCommentCount:(long long)a0 authorScene:(BOOL)a1;
+ (id)getWechatProfileVCWithFeedTid:(id)a0 comment:(id)a1 isSelfPost:(BOOL)a2 authorScene:(BOOL)a3 delegate:(id)a4 halfScreenDelegate:(id)a5;
+ (void)reportUserComment:(id)a0 feedID:(id)a1 commentScene:(int)a2 uiScene:(id)a3 nav:(id)a4;
+ (id)parseExtLink:(id)a0 commentScene:(int)a1;
+ (BOOL)commentFunctionIsSpam;
+ (void)pushProfileWithClickCommentUsername:(id)a0 contact:(id)a1 isWeChatFriend:(BOOL)a2 dataItem:(id)a3 fromVC:(id)a4;
+ (void)reportFeedCommentDeleteClickWithComment:(id)a0 fromVC:(id)a1;
+ (void)reportCommentLikeClick:(id)a0;
+ (void)reportCommentAvatarClick:(id)a0 clickType:(unsigned long long)a1 commentViewScene:(int)a2 feedID:(id)a3;
+ (void)reportCommentPostClickWithRootCommentID:(unsigned long long)a0;
+ (void)reportCommentReplyEventWithDataItem:(id)a0 replyComment:(id)a1 commentScene:(int)a2 vc:(id)a3;
+ (id)createCommentAdPlayerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 argsWrap:(id)a1;
+ (BOOL)canUseCacheCommentVC:(id)a0 contentVM:(id)a1 refCommentID:(unsigned long long)a2 appendCommentModel:(id)a3;
+ (BOOL)checkCanPostBigEmoticonCommentWithItemSwitch:(BOOL)a0 isMemberShip:(BOOL)a1;
+ (BOOL)checkCanPostBigImageCommentWithItemSwitch:(BOOL)a0 isMemberShip:(BOOL)a1;

@end
