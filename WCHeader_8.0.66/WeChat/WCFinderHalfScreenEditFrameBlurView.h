@class MMUIButton, MMUIView, EditImageCropGridView;
@protocol WCFinderHalfScreenEditFrameBlurViewDelegate;

@interface WCFinderHalfScreenEditFrameBlurView : UIView

@property (retain, nonatomic) MMUIView *headBlurView;
@property (retain, nonatomic) MMUIView *bottomBlurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (retain, nonatomic) EditImageCropGridView *cropGridView;
@property (nonatomic) BOOL hiddenCropGridView;
@property (readonly, nonatomic) MMUIButton *cropFrameDownButton;
@property (weak, nonatomic) id<WCFinderHalfScreenEditFrameBlurViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupInitRectAndHiddenCropGridView:(struct CGSize { double x0; double x1; })a0;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)layoutViews;
- (id)createBlurView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentCropRect;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)panCropFrameButton:(id)a0;
- (void)updateScrollViewLayoutViews;
- (void).cxx_destruct;

@end
