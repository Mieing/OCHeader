@class MMUIButton;

@interface WCFinderLiveStarterSimpleCamera : MMUIButton

@property (retain, nonatomic) MMUIButton *simpleCamera;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isBackCamera;
@property (copy, nonatomic) id /* block */ simpleCameraClickBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateLandscape:(BOOL)a0;
- (void)layoutUI;
- (void)simpleCameraButtonClick:(id)a0;
- (void)setUpUI;
- (void)updateAccessibilityLabel;
- (void).cxx_destruct;

@end
