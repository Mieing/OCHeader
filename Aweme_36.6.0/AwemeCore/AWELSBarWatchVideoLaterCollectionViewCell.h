@class UILabel, DUXBaseImageView, AWELSBarWatchVideoLaterProgressView, UIView;

@interface AWELSBarWatchVideoLaterCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) DUXBaseImageView *coverImageView;
@property (retain, nonatomic) AWELSBarWatchVideoLaterProgressView *progressView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *watchTimeLabel;
@property (retain, nonatomic) DUXBaseImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorLabel;

+ (double)titleHeightForAwemeModel:(id)a0 width:(double)a1;
+ (id)titleWithAwemeModel:(id)a0;

- (void)updatePlayTime:(double)a0;
- (void)updatePlayProgress:(double)a0;
- (void)updateWithModel:(id)a0 useRecordTime:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
