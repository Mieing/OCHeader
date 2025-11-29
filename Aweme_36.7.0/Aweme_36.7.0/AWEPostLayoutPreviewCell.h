@class UIImageView, AWEAwemeModel, AWEGradientView, UILabel;

@interface AWEPostLayoutPreviewCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverGradientView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UILabel *waterfallTitleLabel;
@property (retain, nonatomic) UILabel *waterfallDateLabel;
@property (retain, nonatomic) UIImageView *waterfallPlayIcon;
@property (retain, nonatomic) UILabel *waterfallPlayCountLabel;
@property (nonatomic) BOOL useWaterfallLayout;
@property (nonatomic) BOOL showCreateDate;

- (BOOL)isTeenMode;
- (void)updateCoverWithCompletion:(id /* block */)a0;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1;
- (void)updateCoverRadius;
- (void)updatePlayLabelShowState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
