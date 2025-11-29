@class NSString, NSDictionary;
@protocol AWEIMMessageProtocol;

@interface AWEIMIncentiveChatMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMMsgRefreshMessageProtocol, AWEIMIncentiveChatMessageProtocol>

@property (nonatomic) long long relationID;
@property (copy, nonatomic) NSString *bizCardId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) BOOL inviteCanCancel;
@property (readonly, copy, nonatomic) NSDictionary *msgCardTextConfig;
@property (readonly, copy, nonatomic) NSDictionary *logParams;
@property (readonly, copy, nonatomic) NSDictionary *lightUISkinConfig;
@property (readonly, copy, nonatomic) NSDictionary *darkUISkinConfig;
@property (nonatomic) unsigned long long incentiveMsgStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *fromUid;
@property (readonly, copy, nonatomic) NSString *secFromUid;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, nonatomic) long long serverMessageID;
@property (readonly, nonatomic) long long aweType;
@property (readonly, nonatomic) long long quoteReplyMessageType;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) long long messageState;
@property (readonly, nonatomic) NSDictionary *syncedExt;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSString *petAIStyle;
@property (readonly, nonatomic) id<AWEIMMessageProtocol> quoteReplyOriginMessage;
@property (copy, nonatomic) NSDictionary *aiExt;
@property (copy, nonatomic) NSDictionary *aiBusinessExt;

+ (id)p_getMessageKeyWithID:(id)a0 relationID:(id)a1;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (id)pluginsComponentsName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isFinalIncentiveMsgStatus;
- (id)p_finalStatusArray;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;

@end
