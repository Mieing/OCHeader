@class NSString;

@interface BDECPigeonMessage : BDECIMMessage

@property (readonly, copy, nonatomic) NSString *belongingBizConversationIdentifier;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long senderRoleType;
@property (readonly, copy, nonatomic) NSString *serverMessageId;
@property (readonly, copy, nonatomic) NSString *clientMessageId;
@property (readonly, copy, nonatomic) NSString *hideUpgrade;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, copy, nonatomic) NSString *hintContentCustomer;
@property (readonly, nonatomic) long long sharkState;

+ (id)messageWithIdentifier:(id)a0 inConversation:(id)a1 pigeonBizType:(id)a2 inbox:(int)a3;
+ (id)messageWithIdentifier:(id)a0 inConversation:(id)a1 pigeonBizType:(id)a2 inbox:(int)a3 belongeClient:(id)a4;

@end
