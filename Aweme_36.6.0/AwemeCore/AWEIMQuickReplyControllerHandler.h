@class AWECommentModel, NSString, AWENotificationModelNew, AWEAwemeModel, NSDictionary, AWEUserModel, UIViewController;
@protocol AWEIMQuickReplyViewControllerProtocol, AWEIMShareModelProtocol;

@interface AWEIMQuickReplyControllerHandler : NSObject <AWEIMQuickReplyControllerHandlerPortocol>

@property (weak, nonatomic) UIViewController<AWEIMQuickReplyViewControllerProtocol> *quickReplyViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *fastReplyType;
@property (nonatomic) BOOL didSendMessage;
@property (retain, nonatomic) AWENotificationModelNew *noticeModel;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) BOOL fromUnreadMention;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *postscriptType;
@property (copy, nonatomic) NSString *sendMessageType;
@property (copy, nonatomic) NSString *sendEnterMethod;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) long long panelLevel;
@property (copy, nonatomic) id /* block */ hintLabelBlock;
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
@property (nonatomic) BOOL showSnackbarWithoutNoti;
@property (nonatomic) BOOL notSendNotiTriggerSnackbar;
@property (nonatomic) BOOL canShowPushGuideBanner;
@property (copy, nonatomic) id /* block */ quickReplyViewControllerSendMessageCompletionBlock;
@property (nonatomic) unsigned long long quoteReplyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showQuickReplyController;
- (id)initWithShareModel:(id)a0 model:(id)a1 toUserId:(id)a2;
- (void)showQuickReplyControllerWithCanShowInnerPush:(BOOL)a0;
- (void)showQuickReplyControllerWithVoipEntranceEnable:(BOOL)a0;
- (void)sendMessageWithText:(id)a0;
- (void)quickReplyViewControllerTappedBlankMask:(id)a0;
- (void)quickReplyViewController:(id)a0 didSendContent:(id)a1;
- (void)quickReplyViewControllerDidDismiss:(id)a0;
- (void)quickReplySendShareMessageSuccessNotification;
- (id)initWithUserModel:(id)a0 noticeModel:(id)a1 toUserId:(id)a2;
- (id)p_createQuickReplyViewController;
- (void)p_presentReplyViewController:(id)a0;
- (void)p_showSendMessageSuccessSnackbarWithShareModel:(id)a0;
- (void)p_sharePrivacyToIMUser:(id)a0 text:(id)a1;
- (void)p_showSendMessageSuccessToastForShareModel:(id)a0;
- (void).cxx_destruct;

@end
