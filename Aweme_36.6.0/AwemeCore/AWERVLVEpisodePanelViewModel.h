@class NSArray, NSString, AWELVideoAlbumInfoModel, AWERVLVEpisodesView;

@interface AWERVLVEpisodePanelViewModel : AWERVLVBasePanelViewModel <AWERVLVEpisodesViewDelegate, AWERVLVFloatPanelProtocol, AWERVLVRightPushPanelProtocol>

@property (retain, nonatomic) AWERVLVEpisodesView *episodesView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (copy, nonatomic) NSArray *episodeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshModel:(id)a0;
- (void)trackLongVideoShowWithEpisodeIndex:(long long)a0;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void).cxx_destruct;
- (id)contentScrollView;

@end
