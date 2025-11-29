@class NSString, IESGCPTeamPlayDebugEntranceView, IESGCPLynxPageOpenCloseManager;

@interface IESGCPTeamPlayWidget : IESGCPBaseWidget <IESGCPTeamPlayRouter, IESGCPLiveIMMessageSubscriber>

@property (retain, nonatomic) IESGCPTeamPlayDebugEntranceView *debugEntranceView;
@property (retain, nonatomic) IESGCPLynxPageOpenCloseManager *lynxPageOpenCloseManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)widgetBindService;
- (void)onAnchorTeamPlayDebugEntranceShow:(id)a0;
- (void)onAnchorPlayDebugEntranceShow:(id)a0;
- (void)onTeamPlayUpdateState:(id)a0;
- (void)onTeamPlayCloseXGame:(id)a0;
- (void)onTeamPlayApplyListChanged;
- (BOOL)isLynxOpen:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
