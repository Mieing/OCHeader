@class NSString, NSDictionary;

@interface __AWERTVIMChatMessage : NSObject <AWEIMRTVChatMessage>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredSentIMConversationID;
@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRTVChatMessage:(id)a0;
- (long long)__aweIMRTVChatMessageTypeWithRTVMessageType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
