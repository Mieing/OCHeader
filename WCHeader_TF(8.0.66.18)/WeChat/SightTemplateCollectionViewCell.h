@class MMUIActivityIndicatorView, NSString, MMWebImageView;

@interface SightTemplateCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *customImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *customLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initialize;
- (void)layoutSubviews;
- (void)reLayoutViews;
- (void)updateWithTemplateInfo:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
