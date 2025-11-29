@interface IESGCPXPlayPanelEventHandler : NSObject

- (void)_handleButtonClickEventWithButtonType:(id)a0 buttonName:(id)a1 schema:(id)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (void)_switchResolution:(id)a0 completion:(id /* block */)a1;
- (void)_restartGameWithExtraInfo:(id)a0;
- (void)_addGameToDeskWithCompletion:(id /* block */)a0;
- (void)_liveWidowButtonClicked;
- (void)_liveVoiceButtonClicked;
- (void)_downloadGame:(id /* block */)a0;
- (void)_updateXPlayGameCollectStatusWithCompletion:(id /* block */)a0;
- (void)_updateNetworkTipsStatus;
- (void)_closePanel;
- (void)_showSharePanelWithExtraInfo:(id)a0;
- (void)_showSubscribePanelWithExtraInfo:(id)a0;
- (void)handlePanelEvent:(id)a0 buttonType:(id)a1 buttonName:(id)a2 schema:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
- (void)handleSecondaryPanelEvent:(id)a0 buttonName:(id)a1 completion:(id /* block */)a2;

@end
