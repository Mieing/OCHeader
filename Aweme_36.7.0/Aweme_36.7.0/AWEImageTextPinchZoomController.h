@interface AWEImageTextPinchZoomController : AWEBaseController <AWEImageTextPinchZoomControllerProtocol>

- (void)trackPinchZoomWithZoomType:(long long)a0;
- (void)setCurrentImageZoomWithInfo:(struct AFDAlbumImageZoomInfo { double x0; struct CGPoint { double x0; double x1; } x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)getCurrentImageZoomInfoWrapper;
- (void)zoomCurrentImageToRatioRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 animated:(BOOL)a2;
- (id)init;

@end
