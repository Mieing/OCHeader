@class NSString, BDPInvitePanel_HG, BDPUniqueID;

@interface BDPInviteTask_HG : NSObject

@property (nonatomic) double showTS;
@property (retain, nonatomic) BDPInvitePanel_HG *panel;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property long long status;
@property (copy, nonatomic) NSString *roomId;

- (void)workAfterPanelDismiss;
- (void)sendInviteEvent:(long long)a0 error:(id)a1;
- (void)sendTrackerPanelClickEvent;
- (void)sendTrackerPanelShowEvent;
- (void)sendTrackerPanelHideEvent;
- (void)showInvitePanel:(id)a0 completion:(id /* block */)a1;
- (void)removeInvitePanelAndDeactivate;
- (void).cxx_destruct;
- (BOOL)deactivate;
- (BOOL)activate;
- (id)initWithUniqueID:(id)a0;

@end
