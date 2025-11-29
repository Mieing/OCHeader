@class MMUIButton, UIView;

@interface MMAssetPickerActionBottomView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUIButton *albumButton;
@property (retain, nonatomic) MMUIButton *cameraButton;
@property (copy, nonatomic) id /* block */ albumBlock;
@property (copy, nonatomic) id /* block */ cameraBlock;

- (void)setBackgroundViewColor:(id)a0;
- (void)setBackgroundViewAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 albumBlock:(id /* block */)a1 cameraBlock:(id /* block */)a2;
- (void)initView;
- (void)initBackgroundView;
- (void)initAlbumButton;
- (void)initCameraButton;
- (id)createActionButton;
- (void)updateAlbumButtonState:(BOOL)a0 cameraButtonState:(BOOL)a1;
- (void)onAlbumButtonClicked:(id)a0;
- (void)onCameraButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
