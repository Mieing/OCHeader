@class NSArray, NSString, AWELVideoAlbumInfoModel, AWERVLVEpisodesView;
@protocol AWERVLVSelectDelegate;

@interface AWERVLVEpisodesViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate, AWERVLVEpisodesViewDelegate>

@property (retain, nonatomic) AWERVLVEpisodesView *episodesView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (copy, nonatomic) NSArray *episodeList;
@property (copy, nonatomic) id /* block */ episodesCloseBlock;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (nonatomic) BOOL shouldSimplifyTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshModel:(id)a0 episodeList:(id)a1 currentSelectIndex:(long long)a2;
- (void)refreshModel:(id)a0 title:(id)a1 subTitle:(id)a2 episodeList:(id)a3 currentSelectIndex:(long long)a4;
- (void)trackLongVideoShowWithEpisodeIndex:(long long)a0;
- (id)panelContentView;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)closeButtonTapped;

@end
