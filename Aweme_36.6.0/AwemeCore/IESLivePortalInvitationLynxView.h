@class IESLivePortalLogNode, IESLiveInvitePortalModel;

@interface IESLivePortalInvitationLynxView : IESLivePortalLynxView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLivePortalLogNode *logNode;
@property (retain, nonatomic) IESLiveInvitePortalModel *model;
@property (retain, nonatomic) IESLiveInvitePortalModel *inviteInfo;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withModel:(id)a1 logNode:(id)a2;
- (void)updateInviteInfo:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (void)didMoveToSuperview;

@end
