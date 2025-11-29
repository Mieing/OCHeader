@interface IESLiveAudioKTVThemePanelViewModel : IESLiveAudioThemePanelViewModel

- (double)itemRatio;
- (BOOL)uploadButtonHidden;
- (void)uploadButtonDidClick;
- (void)insertUGCImage:(id)a0;
- (void)p_setupViewModelsWithThemeList:(id)a0;
- (void)fetchListWithRoomId:(id)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)refreshPanelThemeList:(id /* block */)a0 scene:(unsigned long long)a1;
- (void)deleteUGCImage:(id)a0;
- (void)fetchListWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchListWithRoomId:(id)a0 completion:(id /* block */)a1;

@end
