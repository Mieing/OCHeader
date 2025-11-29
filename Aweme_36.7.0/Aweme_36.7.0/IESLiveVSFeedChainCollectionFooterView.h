@class UILabel;

@interface IESLiveVSFeedChainCollectionFooterView : UICollectionReusableView

@property (retain, nonatomic) UILabel *noMoreDataLabel;

- (void)updateCenterPositionOffset:(double)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
