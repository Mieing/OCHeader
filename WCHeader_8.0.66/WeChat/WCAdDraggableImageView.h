@class AdExposureTimerHelper, WCAdFullCardDragImageGestureInfo, UIPanGestureRecognizer, WCAdURLImageView;
@protocol WCAdDraggableImageViewDelegate;

@interface WCAdDraggableImageView : MMUIView

@property (retain, nonatomic) WCAdFullCardDragImageGestureInfo *dragImageInfo;
@property (retain, nonatomic) WCAdURLImageView *imageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panImageGesture;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } initialCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } srcHitRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destHitRect;
@property (retain, nonatomic) AdExposureTimerHelper *dragImageTimer;
@property (weak, nonatomic) id<WCAdDraggableImageViewDelegate> delegate;
@property (nonatomic) BOOL bOutFrameMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dragImageInfo:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)updateRectInfosWithSuperview:(id)a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setDraggable:(BOOL)a0;
- (void)resetDraggableView:(BOOL)a0;
- (void)addPanImageGesture;
- (void)removePanImageGesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fetchConvertedRectFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)handlePanImageGesture:(id)a0;
- (void)onPanGestureRecognizerDidEnd;
- (void).cxx_destruct;

@end
