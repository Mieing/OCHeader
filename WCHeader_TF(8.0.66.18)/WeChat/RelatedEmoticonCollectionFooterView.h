@class MMUIActivityIndicatorView, MMUILabel, MMTerminatorView;

@interface RelatedEmoticonCollectionFooterView : UICollectionReusableView

@property (retain, nonatomic) MMTerminatorView *terminatorView;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) MMUILabel *loadingTipView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)onLoading;
- (void)onNoMore;
- (void).cxx_destruct;

@end
