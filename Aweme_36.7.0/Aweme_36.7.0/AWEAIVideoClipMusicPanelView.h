@class UIView, AWEAIVideoClipMusicSelectView, AWEAIVideoClipFavoriteMusicSelectView, UIButton, NSDictionary, NSMutableArray, AWEVideoPublishMusicSelectTopTabView, UILabel;
@protocol AWEStudioMusicModelProtocol, AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate;

@interface AWEAIVideoClipMusicPanelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEVideoPublishMusicSelectTopTabView *topTabView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *selectViewContainer;
@property (retain, nonatomic) AWEAIVideoClipMusicSelectView *musicSelectView;
@property (retain, nonatomic) AWEAIVideoClipFavoriteMusicSelectView *favoriteMusicSelectView;
@property (retain, nonatomic) NSMutableArray *favoriteMusicList;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> selectedMusic;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> previousSelectedMusic;
@property (nonatomic) BOOL favoriteTabEnabled;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (copy, nonatomic) id /* block */ didSelectMusicHandler;
@property (copy, nonatomic) id /* block */ enterMusicLibraryHandler;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> favoriteMusicDelegate;

- (void)updateFavoriteMusicList:(id)a0 loading:(BOOL)a1;
- (void)undoSelection;
- (void)updateWithMusicList:(id)a0 playingMusic:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 favoriteTabEnabled:(BOOL)a1 referExtra:(id)a2;
- (void)setFavoriteMusicDelegate:(id)a0;
- (void)setupMusicSelectViewsInContainer:(id)a0;
- (void)switchToFavoriteTab:(BOOL)a0;
- (id)favoriteMusicDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
