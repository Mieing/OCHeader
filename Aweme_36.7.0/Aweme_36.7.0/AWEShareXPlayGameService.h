@class NSString;

@interface AWEShareXPlayGameService : AWEShareCommonImpl <AWEShareXPlayGame>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithXPlayGameModel:(id)a0 onViewController:(id)a1;
- (id)shareXPlayGameStageWithHandler:(id /* block */)a0;
- (long long)panelItemTypeWithChannelShareType:(id)a0;

@end
