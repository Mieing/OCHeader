@class UILabel, AWEMusicPerformanceModel, BDImageView;

@interface AWEMusicPerformanceCardCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *postImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) AWEMusicPerformanceModel *performanceModel;

+ (double)cellHeight;

- (void)updateWithPerformanceModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
