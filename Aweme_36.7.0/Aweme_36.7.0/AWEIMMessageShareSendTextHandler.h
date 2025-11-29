@class NSString, AWEIMMessage, AWEAwemeModel, NSDictionary, AWEIMMessageAttachmentDownloadViewModel;
@protocol AWEIMShareModelProtocol;

@interface AWEIMMessageShareSendTextHandler : NSObject <AWEIMQuickReplyViewControllerDelegate, AWEIMMessageShareSendTextHandlerProtocol>

@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (copy, nonatomic) NSString *messageType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (copy, nonatomic) id /* block */ delayShareDoneBlock;
@property (copy, nonatomic) NSString *customToast;
@property (nonatomic) BOOL isShareCloseFriend;
@property (copy, nonatomic) NSString *sendEnterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *activityTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showQuickReplyController;
- (void)p_customQuickReplyVC:(id)a0;
- (void)sendMessageWithText:(id)a0;
- (void)quickReplyViewController:(id)a0 didSendContent:(id)a1;
- (void)quickReplyViewControllerWillDismiss:(id)a0;
- (void).cxx_destruct;

@end
