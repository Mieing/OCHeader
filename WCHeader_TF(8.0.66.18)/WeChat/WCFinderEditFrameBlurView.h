@class MMUIButton;
@protocol WCFinderEditFrameBlurViewDelegate;

@interface WCFinderEditFrameBlurView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (retain, nonatomic) MMUIButton *headBlurView;
@property (retain, nonatomic) MMUIButton *bottomBlurView;
@property (retain, nonatomic) MMUIButton *cropFrameUpButton;
@property (retain, nonatomic) MMUIButton *cropFrameDownButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (nonatomic) BOOL forbiddenFrameCrop;
@property (weak, nonatomic) id<WCFinderEditFrameBlurViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forbiddenFrameCrop:(BOOL)a2;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)onTap;
- (id)createBlurView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentCropRect;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setCropFrameButtonHidden:(BOOL)a0;
- (void)panCropFrameButton:(id)a0;
- (void)updateScrollViewLayoutViews;
- (void).cxx_destruct;

@end
