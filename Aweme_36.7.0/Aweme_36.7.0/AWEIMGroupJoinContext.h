@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEIMGroupJoinContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableBizExtension;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) long long conversationShortID;
@property (readonly, copy, nonatomic) NSDictionary *bizExtension;
@property (copy, nonatomic) NSString *invitation;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *onlyFollowStatus;
@property (copy, nonatomic) NSString *applyInfo;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *trackEnterFrom;
@property (copy, nonatomic) NSString *trackEnterMethod;
@property (retain, nonatomic) NSDictionary *passThroughParams;
@property (copy, nonatomic) NSString *tokenType;

+ (id)contextWithConversationID:(id)a0 conversationShortID:(long long)a1;

- (void)updateBizExtension:(id)a0;
- (id)initWithConversationID:(id)a0 conversationShortID:(long long)a1;
- (void).cxx_destruct;

@end
