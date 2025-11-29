@class NSString, AWEIMMessage;

@interface AWEIMMessagePropertyItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *idempotentID;
@property (nonatomic) long long createdAt;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *senderUid;
@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *senderSecUid;
@property (readonly, nonatomic) BOOL sendFromMe;
@property (nonatomic) BOOL shouldShowAnimate;
@property (nonatomic) BOOL isFake;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL markRead;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL isExchange;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) BOOL isFromReadUserList;

+ (id)itemWithKey:(id)a0 messageID:(id)a1 iesItem:(id)a2;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (BOOL)isEqualToPropertyItem:(id)a0;
- (BOOL)isEmojiPropertyItem;
- (void).cxx_destruct;

@end
