@class NSString;

@interface IESIMFeedVideoServiceImpl : NSObject <IESIMFeedVideoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)checkUnavailableInfoForAwemeModel:(id)a0 completion:(id /* block */)a1;
- (id)createVideoMsgAssistManager;
- (id)msgCommentShareRefreshHandlerToRegisterWithComponentCenter:(id)a0;
- (id)msgCommentShareRefreshHandlerToRegisterWithConversationContext:(id)a0;
- (Class)videoMsgAssistManagerClass;
- (id)createFeedVideoUnavailableBubble;
- (id)createCommentShareTableViewCellViewModelWithMessage:(id)a0 conversation:(id)a1;
- (Class)commentShareTableViewCellViewModelClass;
- (id)createCommentShareCommentBubbleView;
- (id)createCommentShareCommentBubbleViewModelWithMessage:(id)a0 commentAvailiable:(BOOL)a1;
- (Class)commentShareCommentBubbleViewModelClass;

@end
