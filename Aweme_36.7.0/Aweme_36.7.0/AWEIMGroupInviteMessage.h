@class NSString, AWEURLModel;

@interface AWEIMGroupInviteMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEURLModel *groupIconURL;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *inviterUid;
@property (retain, nonatomic) NSString *inviterSecUid;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *targetGroupID;
@property (retain, nonatomic) NSString *targetGroupShortID;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (copy, nonatomic) NSString *groupOwnerNickName;
@property (copy, nonatomic) NSString *groupCreateType;
@property (nonatomic) BOOL isShareGroupCard;
@property (nonatomic) long long isInGroup;
@property (nonatomic) long long memberCount;
@property (nonatomic) long long scene;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getSyncedExtDict;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
