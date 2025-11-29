@class UIView;
@protocol IESLiveLGameAnchorCameraViewDelegate;

@interface IESLiveLGameAnchorCameraView : UIView

@property (nonatomic) BOOL minimize;
@property (retain, nonatomic) UIView *cameraView;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) long long topXPadding;
@property (nonatomic) long long topYPadding;
@property (nonatomic) struct CGSize { double width; double height; } smallWindowSize;
@property (weak, nonatomic) id<IESLiveLGameAnchorCameraViewDelegate> delegate;

- (void)panSmallWindowGesture:(id)a0;
- (id)previewView;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
