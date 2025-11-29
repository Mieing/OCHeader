@class MMUIActivityIndicatorView, NSString, MMWebImageView;

@interface WCFinderVideoTemplateSelectCollectionViewCell : UICollectionViewCell <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *customLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellID;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setTemplate:(id)a0;
- (void)setCoverUrl:(id)a0;
- (void)showBorder:(BOOL)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
