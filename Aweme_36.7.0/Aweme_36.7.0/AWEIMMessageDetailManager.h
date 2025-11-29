@class AWEIMMessageConversation;
@protocol AWEIMMessageDetailManagerDelegate, AWEIMMessageDataProtocol;

@interface AWEIMMessageDetailManager : NSObject

@property (retain, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL enableUploadRequestScene;
@property (weak, nonatomic) id<AWEIMMessageDetailManagerDelegate> delegate;

- (void)showMessageDetailWithMessage:(id)a0 requestScene:(id)a1;
- (void)showMessageDetailWithOriginMessage:(id)a0 requestScene:(id)a1;
- (BOOL)__canPushVC;
- (void)showMessageDetailWithItemID:(id)a0 message:(id)a1 requestScene:(id)a2;
- (void)showMessageDetailWithItemID:(id)a0 quoteMessage:(id)a1 requestScene:(id)a2;
- (void)__showMediaQuoteReplyWithMessage:(id)a0 requestScene:(id)a1;
- (void)__showHotSpotCommentShareDetailWithMessage:(id)a0;
- (void)p_showMessage:(id)a0 withOriginMessage:(id)a1 requestScene:(id)a2;
- (void)__showDefaultWithWithMessage:(id)a0;
- (void)__showCardWithWithMessage:(id)a0 requestScene:(id)a1;
- (void)__showImageOrVideoWithWithMessage:(id)a0;
- (void)__showWatchOnceTextWithWithMessage:(id)a0 originalMessage:(id)a1;
- (void)__showShareGameWithMessage:(id)a0;
- (void)__showBulletContainerDetailWithMessage:(id)a0;
- (void)__showTransferMoneyDetailWithMessage:(id)a0;
- (void)__showTransferMoneyGroupDetailWithMessage:(id)a0;
- (void)__showSpiltBillDetailWithMessage:(id)a0;
- (void)__showCommentShareDetailWithMessage:(id)a0 requestScene:(id)a1;
- (void)__transferProfileWithWithMessage:(id)a0;
- (void)__showChapterShareDetailWithMessage:(id)a0;
- (void)__showEntertainmentCommentShareDetailWithMessage:(id)a0;
- (void)__messageDetailtrackerWithMessage:(id)a0;
- (id)initWithWithMessageDataController:(id)a0 conversation:(id)a1;
- (void)p_showSpecialMessage:(id)a0;
- (void).cxx_destruct;

@end
