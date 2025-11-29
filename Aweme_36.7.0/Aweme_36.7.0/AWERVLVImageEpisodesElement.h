@class AWERVLVImageEpisodesView, NSString;

@interface AWERVLVImageEpisodesElement : AWERVVideoInfoBaseElement <AWERVLVImageEpisodesViewDelegate>

@property (retain, nonatomic) AWERVLVImageEpisodesView *imageEpisodesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getCurrentEpisodeIndex;
- (void)showAllPanelWithModel:(id)a0 episodeList:(id)a1 currentSelectIndex:(long long)a2;
- (void)trackLongVideoShowWithEpisodeIndex:(long long)a0;
- (BOOL)isSupportMultiEpisode;
- (BOOL)isSupportAppointmentEpisode;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
