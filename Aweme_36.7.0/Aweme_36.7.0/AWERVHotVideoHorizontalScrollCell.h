@class UIImageView, AWEFeedInsetsLabel, UILabel, AWERVHotVideoPlayCoverView;

@interface AWERVHotVideoHorizontalScrollCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWERVHotVideoPlayCoverView *maskCoverView;

- (void)configCellWithModel:(id)a0 currentPlayModelItemId:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
