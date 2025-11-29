@class NSString, MMWebImageView;

@interface MMFinderLiveImageCarouselViewItem : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *bgView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBgView;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
