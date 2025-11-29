@class NSString;

@interface TIMXOConversationDeleteInfoModel : NSObject

@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) long long shortID;
@property (readonly, nonatomic) unsigned long long conversationType;
@property (readonly, nonatomic) long long deletedMessageCount;
@property (readonly, nonatomic) long long remainingDay;

- (id)initWithConversationIdentifier:(id)a0 shortID:(long long)a1 conversationType:(unsigned long long)a2 deletedMessageCount:(long long)a3 remainingDay:(long long)a4;
- (void).cxx_destruct;

@end
