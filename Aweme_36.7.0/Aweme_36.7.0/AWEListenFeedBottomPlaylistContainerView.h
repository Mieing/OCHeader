@class DUXButton, UIView;

@interface AWEListenFeedBottomPlaylistContainerView : UIView

@property (retain, nonatomic) DUXButton *playlistBtn;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) id /* block */ onPlaylistBtnDidClicked;
@property (copy, nonatomic) id /* block */ onCollectBtnDidClicked;
@property (retain, nonatomic) DUXButton *collectBtn;

- (void)playListDidClick;
- (void)collectDidClick;
- (void).cxx_destruct;
- (id)init;
- (void)setUpUI;

@end
