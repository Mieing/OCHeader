@class NSString, BDECPigeonUnReadCountModel, NSDictionary;
@protocol BDECPigeonParticipantsInConversationDelegate;

@interface BDECPigeonConversation : BDECIMConversation

@property (weak, nonatomic) id<BDECPigeonParticipantsInConversationDelegate> participantDelegate;
@property (copy, nonatomic) NSString *backupBizConversationID;
@property (copy, nonatomic) NSString *backupPigeonBizType;
@property (copy, nonatomic) BDECPigeonUnReadCountModel *unreadCountNew;
@property (copy, nonatomic) NSDictionary *unreadCountDataDict;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *bizConversationID;
@property (readonly, copy) NSString *pigeonConGroupID;
@property (readonly, nonatomic) int inbox;

+ (id)conversationWithBizConversationID:(id)a0 pigeonBizType:(id)a1 inbox:(int)a2;
+ (id)conversationWithBizConversationID:(id)a0 pigeonBizType:(id)a1 inbox:(int)a2 belongeClient:(id)a3;
+ (id)conversationWithIMCloudConversationID:(id)a0 belongeClient:(id)a1;
+ (id)conversationWithIMCloudConversationID:(id)a0;

- (id)pigeonShopID;
- (id)pigeonBizType;
- (BOOL)isInNewUnreadCountAB;
- (id)initConversationWithIdentifier:(id)a0 belongeClient:(id)a1;
- (BOOL)isCurrentUserConvWithIMCloudConversationID:(id)a0 belongeClient:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)unreadCount;

@end
