@class NSArray;
@protocol IESLiveChatChannelUserListPanelCellActionResponder, IESLiveChatChannelUserListPanelCellDataProvider;

@interface IESLiveChatChannelUserListPanelCellAction : NSObject

@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellDataProvider> dataProvider;
@property (copy, nonatomic) NSArray *memberActionModels;
@property (nonatomic) long long actionButtonType;
@property (copy, nonatomic) id /* block */ infoSettingActin;
@property (nonatomic) BOOL enableInvite;
@property (copy, nonatomic) id /* block */ inviteActin;
@property (nonatomic) BOOL enableAnnouncement;
@property (copy, nonatomic) id /* block */ announcementAction;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellActionResponder> responder;

- (id)actionModelsForDefault:(id)a0;
- (id)actionModelsForDefaultSelf:(id)a0;
- (id)actionModelsForDefaultOpratable:(id)a0;
- (id)actionModelsForWaitingSelf:(id)a0;
- (id)actionModelsForWaitingOperatable:(id)a0 isInvite:(BOOL)a1;
- (id)actionModelsForInvitedSelf:(id)a0;
- (id)actionModelsForLinkedSelf:(id)a0;
- (id)actionModelsForLinkedOthers:(id)a0;
- (id)actionModelsForLinkedOthersOperatable:(id)a0;
- (void)bindActionsWithUser:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;

@end
