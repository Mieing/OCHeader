@class UIImageView, TingPlayStatusView, UILabel, UIView;

@interface WCFinderProfilePlaylistMusicCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) TingPlayStatusView *statusView;
@property (retain, nonatomic) UIImageView *playInfoIconView;
@property (retain, nonatomic) UILabel *playInfoLabel;
@property (nonatomic) BOOL hiddenBottomLine;
@property (nonatomic) double horizontalPadding;

+ (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0 style:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)useAllStyle;
- (void)useMusicStyle:(id)a0 isPlaying:(BOOL)a1 isAuthor:(BOOL)a2;
- (void)useMusicStyle:(id)a0 isPlaying:(BOOL)a1 isLast:(BOOL)a2 isAuthor:(BOOL)a3;
- (void).cxx_destruct;

@end
