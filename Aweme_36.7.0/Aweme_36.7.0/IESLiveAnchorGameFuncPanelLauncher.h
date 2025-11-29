@class IESLiveAnchorInteractiveGameItem, NSString;

@interface IESLiveAnchorGameFuncPanelLauncher : NSObject <IESLiveAnchorGameFuncPanelLauncher>

@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *preAnchorGameItem;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *anchorGameItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)processWhenStartAnchorInteractiveGameItem:(id)a0 source:(id)a1 activityName:(id)a2 sourceFrom:(id)a3 fromButton:(BOOL)a4;
- (void)processAutoStartGameWhenFetchAnchorInteractiveGameListCompleted:(id)a0;
- (void)showSwitchGameAlertWithWillStartGameItem:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)showSwitchGameAlertWithWillStartGameItem:(id)a0 description:(id)a1 action:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)_trackSwitchGameDidShowWithCurrentPlayingGameId:(id)a0 currentPlayingGameName:(id)a1 willStartGameId:(id)a2 willStartGameName:(id)a3;
- (void)_trackSwitchGameDidClickWithType:(id)a0 currentPlayingGameId:(id)a1 currentPlayingGameName:(id)a2 willStartGameId:(id)a3 willStartGameName:(id)a4;
- (void).cxx_destruct;

@end
