@protocol IESLiveInteractionGameAvatarFullLinkMonitorProtocol;

@interface IESLiveInteractGameAvatarApi : HTSLiveApi

@property (weak, nonatomic) id<IESLiveInteractionGameAvatarFullLinkMonitorProtocol> gameAvatarMonitor;

- (void)notifyGameAvatarStatusChange:(id)a0 completion:(id /* block */)a1;
- (void)updateHamletAvatarWithParams:(id)a0 completion:(id /* block */)a1;
- (void)createGameAvatarExtraCameraWithParams:(id)a0 completion:(id /* block */)a1;
- (void)deleteGameAvatarExtraCameraWithParams:(id)a0 completion:(id /* block */)a1;
- (void)notifyHamletAvatarStreamInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getXPlayInitInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
