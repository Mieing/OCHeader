@class MMMusicFadeOutLayer, UIImageView, UIImage, MVImageLoader, NSObject;
@protocol OS_dispatch_queue;

@interface MusicDefualtImageView : UIImageView

@property (retain, nonatomic) UIImage *currentImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayBounds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) MVImageLoader *imageLoader;
@property (nonatomic) BOOL inInUpdateImageProcess;
@property (retain, nonatomic) MMMusicFadeOutLayer *maskLayer;
@property (retain, nonatomic) UIImageView *foregroundImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupMaskLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateDisplayImageIfNeeded;
- (void)reloadImage;
- (void)updateDefaultImage:(id)a0;
- (void)updateDefaultImageURLString:(id)a0;
- (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)generateEffectRenderWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
