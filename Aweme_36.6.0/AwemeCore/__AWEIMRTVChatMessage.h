@class NSString, NSDictionary;

@interface __AWEIMRTVChatMessage : NSObject <AWEIMRTVChatMessage>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long orderIndex;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredSentIMConversationID;
@property (copy, nonatomic) NSDictionary *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIESIMMessage:(id)a0;
- (id)initTextMsgWithIESIMMessage:(id)a0 text:(id)a1;
- (long long)__rtvMessageTypeWithAWEIMMessageType:(long long)a0;
- (void).cxx_destruct;
- (void)updateStatus:(long long)a0;

@end
