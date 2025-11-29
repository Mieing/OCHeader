@class AWECommentModel, NSString, AWENotificationModelNew, AWEAwemeModel, NSDictionary;

@interface AWEIMExternalRefAwemeController : NSObject <AWEIMQuickReplyControllerHandlerPortocol, AWEIMCustomQuickReplyControllerHandlerPortocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWENotificationModelNew *noticeModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *convID;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *sendEnterMethod;
@property (nonatomic) unsigned long long quoteReplyType;
@property (nonatomic) long long panelLevel;
@property (copy, nonatomic) NSString *sendMessageType;
@property (copy, nonatomic) id /* block */ hintLabelBlock;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL shouldShowShareTitle;
@property (nonatomic) BOOL needReplyModel;
@property (copy, nonatomic) NSString *noticeContent;
@property (copy, nonatomic) NSString *noticeContentName;
@property (copy, nonatomic) NSString *noticeContentText;
@property (nonatomic) long long noticeType;
@property (copy, nonatomic) NSString *noticeSchema;
@property (nonatomic) long long defaultInputViewType;
@property (copy, nonatomic) NSDictionary *sendMessageExtraParam;
@property (copy, nonatomic) NSDictionary *sendMessageExtraParamForSendMessage;
@property (copy, nonatomic) id /* block */ quickReplyViewControllerDidDismissBlock;
@property (nonatomic) BOOL showToastAfterSent;
@property (copy, nonatomic) id /* block */ quickReplyViewControllerSendMessageCompletionBlock;
@property (nonatomic) BOOL canShowPushGuideBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *interfaceEventExtraParam;
@property (copy, nonatomic) NSDictionary *snackBartrackParams;
@property (copy, nonatomic) id /* block */ quickEmoticonTitleBlock;
@property (copy, nonatomic) id /* block */ configAvatarBlock;
@property (nonatomic) unsigned long long avatarType;
@property (copy, nonatomic) NSString *replyActionType;

+ (void)p_asyncGetIESConvWithConvId:(id)a0 completion:(id /* block */)a1;

- (void)showQuickReplyController;
- (id)getEnterFrom;
- (id)getEnterMethod;
- (void)showQuickReplyControllerWithVoipEntranceEnable:(BOOL)a0;
- (void)directSendMessageWithText:(id)a0;
- (void)realTransfer;
- (void)p_realTransfer;
- (void)p_prepareForQuoteReplyTypeIfNeeded;
- (void)transferToFloatMessageVC;
- (id)initWithModel:(id)a0 toUserID:(id)a1;
- (id)initWithModel:(id)a0 conversationID:(id)a1 replyUserID:(id)a2;
- (id)initWithNoticeModel:(id)a0 toUserID:(id)a1;
- (void).cxx_destruct;

@end
