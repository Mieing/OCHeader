@class NSString, NSDictionary, AWEAwemeModel;
@protocol AWEIMShareModelProtocol, IESIMShareContextProtocol;

@interface AWEIMMessageShareAwemeWithTextHandler : NSObject <AWEIMQuickReplyViewControllerDelegate>

@property (nonatomic) BOOL isSending;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) id<IESIMShareContextProtocol> context;
@property (nonatomic) BOOL isDisplayVideoBtn;
@property (nonatomic) BOOL enableClearButton;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) BOOL separateMsg;
@property (copy, nonatomic) NSString *customToast;
@property (nonatomic) unsigned long long imQuoteReplyType;
@property (copy, nonatomic) id /* block */ sendCompletion;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sendEnterMethod;
@property (copy, nonatomic) NSDictionary *activityTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showQuickReplyController;
- (void)p_customQuickReplyVC:(id)a0;
- (void)quickReplyViewController:(id)a0 didSendContent:(id)a1;
- (void)quickReplyViewControllerWillDismiss:(id)a0;
- (void)p_sendMessageWithText:(id)a0 messageType:(id)a1;
- (void)quickReplyViewController:(id)a0 didSelectEmoticonModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
