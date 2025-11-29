@class MMUIActivityIndicatorView;

@interface MMLiveRelatedCollectionViewLoadIndicatorView : UICollectionReusableView

@property (retain, nonatomic) MMUIActivityIndicatorView *relatedLiveLoadingIndicatorView;
@property (nonatomic) BOOL active;

+ (id)reusableViewKind;
+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
