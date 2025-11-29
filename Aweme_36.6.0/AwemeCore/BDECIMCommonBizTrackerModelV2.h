@class NSString, NSDictionary;

@interface BDECIMCommonBizTrackerModelV2 : NSObject

@property (copy, nonatomic) NSString *clientMessageID;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *srcCreateTime;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *conversationShortID;
@property (copy, nonatomic) NSString *serverMessageID;
@property (copy, nonatomic) NSString *subConversationShortID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *customerUID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *messageExt;
@property (copy, nonatomic) NSString *conversationType;
@property (copy, nonatomic) NSString *inboxType;

+ (id)getShopIDWithConversationID:(id)a0 client:(id)a1;

- (id)initWithMessage:(id)a0 messageID:(id)a1 conversation:(id)a2 client:(id)a3;
- (id)initWithPBMessage:(id)a0 client:(id)a1;
- (void).cxx_destruct;

@end
