@class UILabel, UIImageView;

@interface AWEMusicPlaylistCollectionBubble : UIControl

@property (nonatomic) BOOL isDisplaying;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *iconright;
@property (retain, nonatomic) UIImageView *iconarrow;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)didTapAddtoPlaylist;
- (void)showToastinView:(id)a0 targetView:(id)a1 content:(id)a2 animated:(BOOL)a3 autoHideDuration:(long long)a4;
- (void)showToastinView:(id)a0 targetView:(id)a1 content:(id)a2 animted:(BOOL)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
