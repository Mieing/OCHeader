@class WCMediaItem, WCImageView;

@interface WCAdConventionalHalfScreenImageMediaView : WCAdConventionalHalfScreenMediaBaseView

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCImageView *imageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 delegate:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 mediaItem:(id)a2 delegate:(id)a3;
- (void)layoutSubviews;
- (void)updateMediaContentWithWidth:(double)a0 height:(double)a1;
- (struct CGSize { double x0; double x1; })fetchMediaSize;
- (id)fetchMediaImage;
- (void).cxx_destruct;

@end
