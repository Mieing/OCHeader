@class UILabel, UIView;

@interface AWEHotWordsRecommendCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *maskCoverView;
@property (retain, nonatomic) UILabel *descLabel;

- (void)hideMaskView;
- (void)configWithModel:(id)a0;
- (void)configureUI;
- (void)showMaskView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
