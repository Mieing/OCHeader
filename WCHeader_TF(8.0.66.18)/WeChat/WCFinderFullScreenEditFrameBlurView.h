@class MMUIButton, MMUIView, RichTextView, EditImageCropGridView;
@protocol WCFinderFullScreenEditFrameBlurViewDelegate;

@interface WCFinderFullScreenEditFrameBlurView : UIView

@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (retain, nonatomic) MMUIView *headBlurView;
@property (retain, nonatomic) MMUIView *bottomBlurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (retain, nonatomic) EditImageCropGridView *cropGridView;
@property (nonatomic) BOOL hiddenEditTipsRichTextView;
@property (retain, nonatomic) RichTextView *editTipsRichTextView;
@property (readonly, nonatomic) MMUIButton *cropFrameDownButton;
@property (weak, nonatomic) id<WCFinderFullScreenEditFrameBlurViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cropThumbSize:(struct CGSize { double x0; double x1; })a1 mediaSize:(struct CGSize { double x0; double x1; })a2 hiddenEditTipsRichTextView:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cropGridViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mediaSize:(struct CGSize { double x0; double x1; })a2 hiddenEditTipsRichTextView:(BOOL)a3;
- (void)setupSubViews;
- (void)updateEditTipsRichTextCenterY:(double)a0 margin:(double)a1 hidden:(BOOL)a2;
- (id)createBlurView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentCropRectInScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFullScreenCropRect;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)panCropFrameButton:(id)a0;
- (void)updateScrollViewLayoutViews;
- (void).cxx_destruct;

@end
