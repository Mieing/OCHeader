@class NSString, NSDictionary;

@interface BDECIMCommonBizTrackerModel : NSObject

@property (copy, nonatomic) NSString *clientMessageID;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *srcCreateTime;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *conversationShortID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *serverMessageID;
@property (copy, nonatomic) NSString *subConversationShortID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *customerUID;
@property (copy, nonatomic) NSDictionary *messageExt;
@property (copy, nonatomic) NSString *conversationType;
@property (copy, nonatomic) NSString *inboxType;

- (id)initWithMessage:(id)a0 messageID:(id)a1 conversation:(id)a2 belongeClient:(id)a3;
- (id)initWithPBMessage:(id)a0 belongeClient:(id)a1;
- (void).cxx_destruct;

@end
