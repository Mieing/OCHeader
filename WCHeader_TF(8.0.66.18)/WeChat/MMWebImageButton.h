@class NSString, UIImage, NSURL, MMWebButtonChainModel;

@interface MMWebImageButton : MMUIButton <MMImageLoaderObserver> {
    UIImage *_defaultImage;
    NSURL *_url;
}

@property (readonly, copy, nonatomic) MMWebButtonChainModel *zz_setup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)zz_create;
+ (BOOL)CanLoadImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)setImageURL:(id)a0;
- (void)setDefaultImage:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
