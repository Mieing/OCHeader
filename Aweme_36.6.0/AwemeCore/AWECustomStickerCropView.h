@class AWECustomStickerCropEditModel, UIView, UIImage, NSString, UIImageView, CAShapeLayer, UIButton, NSMutableArray, UIVisualEffectView;
@protocol AWECustomStickerCropViewDelegate;

@interface AWECustomStickerCropView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) CAShapeLayer *effectLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *cropView;
@property (retain, nonatomic) UIImageView *leftUpArrow;
@property (retain, nonatomic) UIImageView *leftDownArrow;
@property (retain, nonatomic) UIImageView *rightUpArrow;
@property (retain, nonatomic) UIImageView *rightDownArrow;
@property (retain, nonatomic) UIView *cropFrameLine;
@property (retain, nonatomic) UIView *leftVerticalLine;
@property (retain, nonatomic) UIView *rightVerticalLine;
@property (retain, nonatomic) UIView *topHorizontalLine;
@property (retain, nonatomic) UIView *bottomHorizontalLine;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) long long currentEditType;
@property (nonatomic) struct CGPoint { double x; double y; } leftUpPoint;
@property (nonatomic) struct CGPoint { double x; double y; } leftDownPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightUpPoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightDownPoint;
@property (nonatomic) struct CGPoint { double x; double y; } prePoint;
@property (retain, nonatomic) UIButton *imageFlipBtn;
@property (retain, nonatomic) UIButton *imageRotateBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editCompleteRect;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) AWECustomStickerCropEditModel *currentEditModel;
@property (weak, nonatomic) id<AWECustomStickerCropViewDelegate> delegate;
@property (retain, nonatomic) UIImage *currentImage;
@property (retain, nonatomic) NSMutableArray *cancelList;
@property (retain, nonatomic) NSMutableArray *redoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pinchGestureHandler:(id)a0;
- (void)imageSpringBack;
- (void)completeCrop;
- (void)updateMaskLayerPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageFrameWithImage:(id)a0 andRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupCropView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clickOnImageFlipBtn;
- (void)clickOnImageRotateBtn;
- (void)saveEditModelWithRotatingAngle:(double)a0 realAngle:(double)a1 isFlipped:(BOOL)a2;
- (void)zoomCropView;
- (void)showEditUI;
- (void)hideEditUI;
- (void)addAnimationToMaskWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0 isFlipped:(BOOL)a1 rotatingAngle:(double)a2;
- (id)getCroppedImage;
- (void)cancelLastEdit;
- (void)redoLastEdit;
- (void)resetEditWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)panGestureHandler:(id)a0;
- (void)tapGestureHandler:(id)a0;

@end
