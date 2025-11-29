@class UIImageView, MMUIButton;
@protocol MiniTaskCollectionLoadMoreViewDelegate;

@interface MiniTaskCollectionLoadMoreView : UICollectionReusableView

@property (retain, nonatomic) MMUIButton *loadMoreButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long section;
@property (weak, nonatomic) id<MiniTaskCollectionLoadMoreViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onLoadMoreButton:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
