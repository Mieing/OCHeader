@class NSArray, UIImageView, NSURL, AWEImageCountView, NSNumber;

@interface AWEImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSURL *imgURL;
@property (retain, nonatomic) NSNumber *imageIndex;
@property (copy, nonatomic) NSArray *imageArray;
@property (retain, nonatomic) AWEImageCountView *imageCountView;

- (void)updateImageCountView:(long long)a0;
- (void)openLargeImage;
- (void)galleryWithParams:(id)a0;
- (void)triggerImageCountView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateImageView;

@end
