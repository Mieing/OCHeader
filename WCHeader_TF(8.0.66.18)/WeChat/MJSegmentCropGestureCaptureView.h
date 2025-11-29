@class NSString, UIPinchGestureRecognizer, UIView, UIPanGestureRecognizer;
@protocol MJSegmentCropGestureCaptureViewDelegate;

@interface MJSegmentCropGestureCaptureView : MMUIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *leftCropMaskView;
@property (retain, nonatomic) UIView *rightCropMaskView;
@property (retain, nonatomic) UIView *topCropMaskView;
@property (retain, nonatomic) UIView *bottomCropMaskView;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGR;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGR;
@property (weak, nonatomic) id<MJSegmentCropGestureCaptureViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)setupGestures;
- (void)layoutWithCenterBoxView:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void).cxx_destruct;

@end
