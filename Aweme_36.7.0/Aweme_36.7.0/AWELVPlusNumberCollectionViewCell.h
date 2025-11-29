@class AWERelatedVideoPlayingAnimationView, AWELVideoEpisodeInfoModel, UILabel, UIView;

@interface AWELVPlusNumberCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfoModel;

- (void)updateSelected:(BOOL)a0;
- (void)updateCellWithEpisodeModelSetTag:(id)a0;
- (void)playingCell;
- (void)notPlayingCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
