@class WCFinderCropRectModel, MMUIScrollView, UIView;
@protocol WCFinderCoverBasePreviewViewDelegate;

@interface WCFinderCoverBasePreviewView : MMUIView

@property (weak, nonatomic) id<WCFinderCoverBasePreviewViewDelegate> delegate;
@property (retain, nonatomic) MMUIScrollView *scrollView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) WCFinderCropRectModel *cropRectModel;
@property (nonatomic) BOOL scrollViewIsProcessing;

- (id)mergeEditImageFromImage:(id)a0;
- (void)refreshPlayerPreviewByModeChange:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getPlayerVideoSize;
- (void)curPreviewCoverImage:(id /* block */)a0;
- (void)curFullCoverImage:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCoverVisualRectByImage:(id)a0;
- (void).cxx_destruct;

@end
