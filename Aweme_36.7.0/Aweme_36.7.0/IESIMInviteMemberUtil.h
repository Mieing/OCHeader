@class AWEIMMessageConversation, NSSet, NSString, IESIMContactPickerComponentContext, IESIMGroupPublicGroupInviteMemberModel;

@interface IESIMInviteMemberUtil : NSObject

@property (copy, nonatomic) NSSet *participants;
@property (retain, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (retain, nonatomic) AWEIMMessageConversation *aweConversation;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) IESIMGroupPublicGroupInviteMemberModel *openCapabilityConfigModel;

- (id)createSwitchVC:(id)a0;
- (id)initWithConversationID:(id)a0 openCapabilityConfigModel:(id)a1;
- (id)p_createCellModelShareModel:(id)a0 conversationID:(id)a1;
- (void)p_updateCellModel:(id)a0 selectService:(id)a1 memberText:(id)a2;
- (void)onButtonClick:(id)a0 selectService:(id)a1 conversationID:(id)a2;
- (void)__sendInviteGroupMessageToUids:(id)a0 conversationID:(id)a1 complete:(id /* block */)a2;
- (id)createSwitchConfig;
- (id)createFriendVC:(id)a0;
- (id)createFansContainerVC:(id)a0;
- (id)createCellConfig:(id)a0;
- (id)createFansVCWithScene:(unsigned long long)a0 conversationID:(id)a1;
- (void).cxx_destruct;
- (id)initWithConversationID:(id)a0;

@end
