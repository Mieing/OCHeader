@class AWECommentModel, NSString, AWEAwemeModel, AWEIMNoticeQuickReplyModel, AWEUserModel;
@protocol AWEIMShareModelProtocol;

@interface AWEIMShareQuoteReplyMessageContextModel : AWEIMShareMessageContextBaseModel <AWEIMShareQuoteReplyMessageContextModelProtocol>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *profileUser;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (retain, nonatomic) AWEIMNoticeQuickReplyModel *replyModel;
@property (copy, nonatomic) NSString *postScriptText;
@property (nonatomic) BOOL shouldSendNoti;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
