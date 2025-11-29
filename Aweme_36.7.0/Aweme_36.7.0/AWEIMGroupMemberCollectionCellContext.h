@class IESIMConversationParticipantModel;

@interface AWEIMGroupMemberCollectionCellContext : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) IESIMConversationParticipantModel *groupMemberModel;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL shouldAddShareOptInfo;
@property (nonatomic) long long style;
@property (nonatomic) double avatarWidth;

- (id)initWithType:(long long)a0 groupMemberModel:(id)a1 active:(BOOL)a2 shouldAddShareOptInfo:(BOOL)a3;
- (void).cxx_destruct;

@end
