@class AWEIMPlayletVideoMessageContent, NSString, NSDictionary;
@protocol AWEIMMessageProtocol;

@interface AWEIMPlayletMessage : AWEIMMessage <AWEIMMessageProtocol, AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMPlayletVideoMessageContent *content;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedForward;
- (id)videoCoverURLs;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
