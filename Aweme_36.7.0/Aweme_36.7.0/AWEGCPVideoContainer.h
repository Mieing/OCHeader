@class NSString, AWEAwemeModel;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEFeedTableViewCellViewControllerProtocol, AWEPlayInteractionGameCPHalfPanelPanelControllerProtocol, IESGCPDIContext, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEGCPVideoContainer : IESGCPBaseContainer <AWEGCPVideoContainerRouter, IESGCPAudienceDetailActions>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate> interactionController;
@property (weak, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> feedCellController;
@property (weak, nonatomic) id<AWEPlayInteractionGameCPHalfPanelPanelControllerProtocol> halfPanelController;
@property (weak, nonatomic) id<IESGCPDIContext> currentAudienceDetailDIContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)gameDetailVC_viewWillAppear:(BOOL)a0 gameDetailVC:(id)a1;
- (void)bindActions;
- (id)initWithScene:(long long)a0 diContainer:(id)a1 awemeModel:(id)a2 panelController:(id)a3 interactionController:(id)a4 feedCellController:(id)a5 halfPanelController:(id)a6;
- (void)updateContainerWithAwemeModel:(id)a0 panelController:(id)a1 interactionController:(id)a2 feedCellController:(id)a3 halfPanelController:(id)a4;
- (void)beforeReset;
- (void)updatePlayTime:(double)a0 totalTime:(double)a1;
- (void).cxx_destruct;

@end
