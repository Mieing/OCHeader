@class NSString, UIImageView, NSArray, MMImageScrollViewHelper, UIView;

@interface MMImagePreviewActionSheet_ImageView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;

@end
