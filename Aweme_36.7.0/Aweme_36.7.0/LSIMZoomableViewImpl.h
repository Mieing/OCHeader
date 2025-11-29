@class UIScrollView, NSString;
@protocol LSIMPhotoBrowserZoomableViewDelegate, AWEIMPhotoBrowserZoomableViewProtocol;

@interface LSIMZoomableViewImpl : UIView <LSIMPhotoBrowserZoomableViewProtocol, AWEIMPhotoBrowserZoomableViewDelegate>

@property (weak, nonatomic) id<LSIMPhotoBrowserZoomableViewDelegate> zoomableDelegate;
@property (retain, nonatomic) UIScrollView<AWEIMPhotoBrowserZoomableViewProtocol> *zoomableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
