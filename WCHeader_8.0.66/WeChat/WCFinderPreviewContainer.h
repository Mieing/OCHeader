@class UIView;

@interface WCFinderPreviewContainer : UIView

@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIView *contentView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onViewFrameChange;
- (id)snapshot;
- (void).cxx_destruct;

@end
