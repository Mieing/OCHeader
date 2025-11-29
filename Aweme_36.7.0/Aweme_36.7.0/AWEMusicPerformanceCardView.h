@class UILabel, AWEMusicPerformanceModel, BDImageView;

@interface AWEMusicPerformanceCardView : UIView

@property (retain, nonatomic) AWEMusicPerformanceModel *performanceModel;
@property (retain, nonatomic) BDImageView *postImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)updateWithPerformanceModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
