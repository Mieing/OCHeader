@class NSURL, UIColor;

@interface WCFinderDyeWebImageView : UIImageView

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *darkURL;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSURL *displayUrl;

- (void)setLightImageURL:(id)a0 darkImageURL:(id)a1 color:(id)a2;
- (void)reloadImage;
- (void)setupImage:(id)a0 withUrl:(id)a1;
- (id)dyeImage:(id)a0 color:(id)a1;
- (struct CGSize { double x0; double x1; })dyeSizeForImage:(id)a0;
- (id)currentUrl;
- (id)currentFormatUrl;
- (id)currentDisplayColor;
- (id)urlAppendColor:(id)a0 color:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
