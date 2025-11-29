@class UIImage, UIView;

@interface YYTextMagnifier : UIView

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fitSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } snapshotSize;
@property (retain, nonatomic) UIImage *snapshot;
@property (weak, nonatomic) UIView *hostView;
@property (nonatomic) struct CGPoint { double x; double y; } hostCaptureCenter;
@property (nonatomic) struct CGPoint { double x; double y; } hostPopoverCenter;
@property (nonatomic) BOOL hostVerticalForm;
@property (nonatomic) BOOL captureDisabled;
@property (nonatomic) BOOL captureFadeAnimation;

+ (id)magnifierWithType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
