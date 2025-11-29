@class NSString, UIImage, IESIMConversationBotModel, AWEIMGroupParticipantBizInfoPeerViewModel, AWEURLModel, IESIMConversationParticipantModel, AWEIMMessageConversation, AWEIMUser;

@interface AWEIMGroupMemberListModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESIMConversationParticipantModel *participant;
@property (retain, nonatomic) IESIMConversationBotModel *bot;
@property (retain, nonatomic) AWEIMUser *imUser;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEIMGroupParticipantBizInfoPeerViewModel *peerVM;
@property (nonatomic) unsigned long long joinPriority;
@property (readonly, nonatomic) UIImage *avatarTagPlaceholderImage;
@property (readonly, nonatomic) AWEURLModel *avatarTagURL;
@property (nonatomic) BOOL isSHL;
@property (readonly, weak, nonatomic) AWEIMMessageConversation *belongConversation;

- (id)initWithParticipator:(id)a0 joinPriority:(long long)a1 belongConversation:(id)a2;
- (id)initWithBot:(id)a0 belongConversation:(id)a1;
- (long long)__unfollowPriorityCrompareWithOther:(id)a0;
- (long long)__unfollowPriorityCForFollowStatus:(long long)a0 followerStatus:(long long)a1 user:(id)a2;
- (long long)__compareWithCurrentUserPriority:(long long)a0 otherUserPriority:(long long)a1 other:(id)a2;
- (long long)__defaultCompareByFollowStatusWithOther:(id)a0;
- (long long)compareByFollowStatusWithOther:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBot;
- (void)fetchUserWithCompletion:(id /* block */)a0;

@end
