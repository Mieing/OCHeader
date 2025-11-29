@class AWESingleMusicView;

@interface AWESingleMusicCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWESingleMusicView *musicView;
@property (nonatomic) BOOL showMore;
@property (nonatomic) BOOL showClipButton;
@property (nonatomic) BOOL darkTheme;

- (void)configWithMusicModel:(id)a0;
- (void)configWithPlayerStatus:(unsigned long long)a0;
- (void)configWithMusicModel:(id)a0 rank:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
