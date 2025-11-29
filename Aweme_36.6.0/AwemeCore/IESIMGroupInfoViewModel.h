@class AWEIMMessageConversation, NSString, AWEIMNewChatDetailContext, UIImage;

@interface IESIMGroupInfoViewModel : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL isPublicGroup;
@property (nonatomic) BOOL hasGroupDesc;
@property (nonatomic) BOOL isAvatarCanEdit;
@property (nonatomic) BOOL isGroupNameCanEdit;
@property (nonatomic) BOOL isGroupDescCanEdit;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupDesc;
@property (retain, nonatomic) UIImage *avatarImage;
@property (nonatomic) BOOL isFirstSetupAvatar;
@property (retain, nonatomic) AWEIMNewChatDetailContext *context;

- (void)p_setup;
- (void)p_bindModel;
- (void)hideGroupDesc;
- (void)clickChangeAvatarBtn;
- (void)clickAvatarView:(id)a0;
- (void)editGroupNameAction;
- (void)editGroupDescAction;
- (void)p_configContext;
- (BOOL)p_checkDescShowPermission;
- (BOOL)p_checkAvatarEditPermission;
- (BOOL)p_checkNameEditPermission;
- (BOOL)p_checkDescEditPermission;
- (void)p_setupImage;
- (void)p_updateGroupName;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
