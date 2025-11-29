@class AWELandscapePageContext, AWELongVideoMultipleEpisodeView, UIView, AWELongVideoDataController;
@protocol AWELandscapeLVideoAlbumViewDelegate;

@interface AWELandscapeLVideoAlbumViewController : UIViewController

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) AWELongVideoMultipleEpisodeView *episodeView;
@property (retain, nonatomic) AWELongVideoDataController *dataController;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (weak, nonatomic) id<AWELandscapeLVideoAlbumViewDelegate> delegate;

- (void)updateWithPageContext:(id)a0 cellContext:(id)a1;
- (void)showAlbumView;
- (void)dismissAlbumViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
