@class WCFinderFeedMediaWrap, UIImage;
@protocol WCFinderFeedImageCDNViewDelegate;

@interface WCFinderFeedImageCDNView : UIImageView

@property (retain, nonatomic) WCFinderFeedMediaWrap *currentMediaWrap;
@property (nonatomic) unsigned long long downloadFlag;
@property (weak, nonatomic) id<WCFinderFeedImageCDNViewDelegate> delegate;
@property (retain, nonatomic) UIImage *defaultImage;

- (void)prepareForReuse;
- (void)updateImageWithMediaWrap:(id)a0 downloadFlag:(unsigned long long)a1 isPriority:(BOOL)a2;
- (void)reloadImage;
- (void)updateImage:(id)a0;
- (void)downloadFinished:(double)a0 key:(id)a1 error:(id)a2 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a3;
- (void).cxx_destruct;

@end
