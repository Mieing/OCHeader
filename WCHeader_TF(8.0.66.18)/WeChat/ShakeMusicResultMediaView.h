@class MMMusicInfo, TingLiteMediaView;

@interface ShakeMusicResultMediaView : MMUIView

@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (retain, nonatomic) TingLiteMediaView *mediaView;

- (id)initWithMusicInfo:(id)a0;
- (void)setupSubviews;
- (void)stop;
- (void)loadData:(id)a0 musicInfo:(id)a1 mvModel:(id)a2 openScene:(unsigned long long)a3;
- (void)enterPlayerWithOpenScene:(unsigned long long)a0 musicInfo:(id)a1 qqMusicInfo:(id)a2 shareItem:(id)a3 viewController:(id)a4;
- (void)layoutMediaViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 openScene:(unsigned long long)a1;
- (void)clearPlayer;
- (void)fillMusicShareItemWithMVPlayerData:(id)a0;
- (void).cxx_destruct;

@end
