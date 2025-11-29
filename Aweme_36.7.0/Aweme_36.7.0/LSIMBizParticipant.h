@class NSString, BDECPigeonParticipant, NSDictionary, LSIMBizConversation;
@protocol BDECIMParticipant;

@interface LSIMBizParticipant : LSIMUseMember

@property (nonatomic) BOOL alreadyRequested;
@property (readonly, nonatomic) BDECPigeonParticipant *participant;
@property (readonly, nonatomic) id<BDECIMParticipant> oParticipant;
@property (readonly, weak, nonatomic) LSIMBizConversation *belongingConversation;
@property (readonly, nonatomic) BOOL isOwner;
@property (readonly, nonatomic) BOOL isSelf;
@property (readonly, nonatomic) long long bizRole;
@property (readonly, nonatomic) BOOL isFake;
@property (readonly, copy, nonatomic) NSString *avatar;
@property (readonly, copy, nonatomic) NSString *nick;
@property (readonly, copy, nonatomic) NSString *nickPinyin;
@property (readonly, copy, nonatomic) NSString *pigeonUid;
@property (readonly, copy, nonatomic) NSString *bizRoleString;
@property (readonly, copy, nonatomic) NSDictionary *extend;
@property (readonly, copy, nonatomic) NSString *shopName;
@property (readonly, copy, nonatomic) NSString *talentPageURL;

+ (id)participantWithPigeonParticipant:(id)a0 originParticipant:(id)a1 inConversation:(id)a2;
+ (id)participantsWithPigeonParticipants:(id)a0 originParticipants:(id)a1 inConversation:(id)a2;
+ (id)participantWithOriginParticipant:(id)a0 inConversation:(id)a1;

- (id)pigeonShopId;
- (id)senderAvatar;
- (id)initWithParticipant:(id)a0 originParticipant:(id)a1 inConversation:(id)a2;
- (id)initWithOriginParticipant:(id)a0 inConversation:(id)a1;
- (id)initFakeParticipantWithSender:(id)a0 bizRole:(id)a1 nickName:(id)a2 avatarURL:(id)a3;
- (void)bindPigeonParticipant:(id)a0;
- (long long)memberRoleType;
- (long long)memberBizRole;
- (id)memberBizRoleString;
- (BOOL)isUserSelf;
- (void).cxx_destruct;
- (id)extension;
- (id)senderName;

@end
