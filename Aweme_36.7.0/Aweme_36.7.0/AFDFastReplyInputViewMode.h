@class NSString, NSDictionary, AWEUserModel;

@interface AFDFastReplyInputViewMode : NSObject <AFDFastReplyInputViewModeProtocol>

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldShowCommentPanel;
@property (copy, nonatomic) NSString *replyCommentID;
@property (copy, nonatomic) NSString *replySubCommentID;
@property (retain, nonatomic) NSDictionary *commentPanelParams;
@property (copy, nonatomic) NSString *toConversationID;
@property (copy, nonatomic) NSString *toUserID;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) unsigned long long messageHandlerAvatarType;
@property (nonatomic) unsigned long long imQuoteReplyType;
@property (nonatomic) unsigned long long messageHandlerQuoteReplyType;
@property (retain, nonatomic) NSDictionary *sendMessageExtraParam;
@property (retain, nonatomic) NSDictionary *sendEmojiMessageParam;
@property (copy, nonatomic) NSString *replyActionType;
@property (nonatomic) unsigned long long checkType;
@property (copy, nonatomic) NSString *checkToConversationID;
@property (copy, nonatomic) NSString *checkToUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
