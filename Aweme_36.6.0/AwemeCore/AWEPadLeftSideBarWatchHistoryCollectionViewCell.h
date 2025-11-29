@class CAGradientLayer, AWEPadLSBWatchHistoryCardBottomView, DUXBaseImageView, UIView, UILabel;

@interface AWEPadLeftSideBarWatchHistoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *coverImageView;
@property (retain, nonatomic) CAGradientLayer *coverImageGradientLayer;
@property (retain, nonatomic) UILabel *cardTagView;
@property (retain, nonatomic) AWEPadLSBWatchHistoryCardBottomView *bottomView;

- (void)setupGradientLayer;
- (void)configViewWithCardType:(long long)a0;
- (void)updateCoverImageWithUrlArray:(id)a0;
- (void)updateBottomText:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
