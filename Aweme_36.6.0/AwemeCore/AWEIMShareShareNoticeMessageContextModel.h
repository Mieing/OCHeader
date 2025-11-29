@class NSString, AWEURLModel;

@interface AWEIMShareShareNoticeMessageContextModel : AWEIMShareMessageContextBaseModel <AWEIMShareShareNoticeMessageContextModelProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *awemeTitle;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) id /* block */ shareNoticeCompletion;
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
