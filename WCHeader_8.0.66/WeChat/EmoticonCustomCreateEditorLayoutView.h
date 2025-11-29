@interface EmoticonCustomCreateEditorLayoutView : WCEditVideoLayoutView

@property (nonatomic) BOOL isClickToCropTime;
@property (nonatomic) BOOL hasTextEdited;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getVideoScaleForCrop;
- (void)layoutScrollView:(double)a0;
- (void)initCropToolAttrBar;
- (void)getNewCropToolAttrBar;
- (void)onClickCropEdit:(id)a0;
- (void)initTopBar;
- (void)initSendBtn;
- (void)reloadTopEditVideoBar;
- (void)reloadBottomEditVideoBar;
- (void)onClickCancel;
- (void)confirmEditText:(id)a0 withColor:(id)a1 style:(unsigned long long)a2 backgroundColor:(id)a3;
- (void)trackingWithTouch:(BOOL)a0;

@end
