@class NSString, NSNumber, NSDictionary;
@protocol AWEIMMessageProtocol;

@interface AWEIMLiveRedPacketMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMLiveRedPacketMessageProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *roomOwnerID;
@property (copy, nonatomic) NSString *roomOwnerSecID;
@property (copy, nonatomic) NSString *roomSchema;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *videoSchema;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) BOOL isDengeredPacket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) id info;
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

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
