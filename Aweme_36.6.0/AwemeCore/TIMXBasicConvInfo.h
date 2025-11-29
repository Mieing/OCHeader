@class NSString;

@interface TIMXBasicConvInfo : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long shortID;
@property (nonatomic) int type;
@property (nonatomic) int inbox;

- (id)initWithConversationID:(id)a0 shortID:(long long)a1 type:(int)a2 inbox:(int)a3;
- (id)initWithConversationID:(id)a0 shortID:(long long)a1 type:(int)a2;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
