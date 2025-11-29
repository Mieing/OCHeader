@class NSArray, NSString, AWERVLVImageEpisodesView, AWELVideoAlbumInfoModel;

@interface AWERVLVImagePanelViewModel : AWERVLVBasePanelViewModel <AWERVLVImageEpisodesViewDelegate, AWERVLVFloatPanelProtocol, AWERVLVRightPushPanelProtocol>

@property (retain, nonatomic) AWERVLVImageEpisodesView *imageView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (copy, nonatomic) NSArray *episodeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidLayoutSubviews;
- (void)refreshModel:(id)a0;
- (void)trackLongVideoShowWithEpisodeIndex:(long long)a0;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void).cxx_destruct;
- (id)contentScrollView;

@end
