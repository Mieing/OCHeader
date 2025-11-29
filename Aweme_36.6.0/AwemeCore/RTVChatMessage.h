@class NSString, NSDictionary;

@interface RTVChatMessage : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *senderID;
@property (readonly, copy, nonatomic) NSDictionary *rawContentDict;
@property (nonatomic) BOOL isFaked;
@property (nonatomic) BOOL shouldShowInMessageListAsFakedMeesage;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredSentIMConversationID;

+ (id)messageWithSender:(id)a0 type:(unsigned long long)a1 content:(id)a2;

- (void)updateConversationID:(id)a0;
- (void)updateMessageID:(id)a0;
- (void)updateSender:(id)a0;
- (void)updateShouldShowInMessageList:(BOOL)a0;
- (void)updatePreferredSentIMConversationID:(id)a0;
- (id)initWithSender:(id)a0 type:(unsigned long long)a1 content:(id)a2;
- (void)updateContentDict:(id)a0;
- (BOOL)isFaked;
- (BOOL)shouldShowInMessageList;
- (void).cxx_destruct;
- (id)description;
- (void)updateStatus:(unsigned long long)a0;
- (id)displayName;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)contentDictionary;

@end
