@class NSString, AFDInviteFriendMessageContentModel;

@interface AWEIMShareInviteFriendMessageContextModel : AWEIMShareMessageContextBaseModel <AWEIMShareInviteFriendMessageContextProtocol>

@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSString *toSessionID;
@property (retain, nonatomic) AFDInviteFriendMessageContentModel *contentModel;
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
