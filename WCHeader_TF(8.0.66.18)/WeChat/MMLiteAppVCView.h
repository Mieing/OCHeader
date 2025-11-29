@class UIView;

@interface MMLiteAppVCView : UIView

@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (retain, nonatomic) UIView *snapshot;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)checkSelfSizeChanged;
- (void)genSnapshotIfNeeded;
- (void).cxx_destruct;

@end
