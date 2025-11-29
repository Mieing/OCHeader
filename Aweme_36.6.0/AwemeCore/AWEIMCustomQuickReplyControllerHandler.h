@class AWEIMMessage, NSString, AWEAwemeModel, NSDictionary, AWEUserModel;
@protocol AWEIMShareModelProtocol;

@interface AWEIMCustomQuickReplyControllerHandler : NSObject <AWEIMQuickReplyViewControllerDelegate, AWEIMCustomQuickReplyControllerHandlerPortocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEIMMessage *referMessage;
@property (nonatomic) BOOL notFindMsg;
@property (copy, nonatomic) NSString *fastReplyType;
@property (copy, nonatomic) NSDictionary *sendMessageExtraParam;
@property (copy, nonatomic) NSDictionary *interfaceEventExtraParam;
@property (copy, nonatomic) NSDictionary *snackBartrackParams;
@property (copy, nonatomic) id /* block */ quickEmoticonTitleBlock;
@property (copy, nonatomic) id /* block */ configAvatarBlock;
@property (copy, nonatomic) id /* block */ hintLabelBlock;
@property (nonatomic) unsigned long long avatarType;
@property (nonatomic) unsigned long long quoteReplyType;
@property (nonatomic) long long defaultInputViewType;
@property (nonatomic) BOOL canShowPushGuideBanner;
@property (copy, nonatomic) id /* block */ quickReplyViewControllerDidDismissBlock;
@property (copy, nonatomic) id /* block */ quickReplyViewControllerSendMessageCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *replyActionType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void)showQuickReplyController;
- (id)convertMessageFromContent:(id)a0;
- (void)showQuickReplyControllerWithVoipEntranceEnable:(BOOL)a0;
- (void)p_customQuickReplyVC:(id)a0;
- (void)sendMessageWithText:(id)a0;
- (void)p_trackSendMessage:(id)a0;
- (void)p_trackInterfaceEventWithContent:(id)a0;
- (void)quickReplyViewControllerTappedBlankMask:(id)a0;
- (void)quickReplyViewController:(id)a0 didSendContent:(id)a1;
- (void)quickReplyViewControllerDidDismiss:(id)a0;
- (void)quickReplySendShareMessageSuccessNotification;
- (void)directSendMessageWithText:(id)a0;
- (id)initWithAwemeModel:(id)a0 userModel:(id)a1 referMessageContentDict:(id)a2;
- (void).cxx_destruct;

@end
