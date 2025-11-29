@class AWENewVideoCoverEditSelectHintView, UIImageView, UIView, UIButton;

@interface AWENewVideoCoverEditStickerView : ACCGestureResponsibleStickerView

@property (retain, nonatomic) AWENewVideoCoverEditSelectHintView *editSelectedHintView;
@property (retain, nonatomic) UIButton *selectedHintDeleteButton;
@property (retain, nonatomic) UIImageView *selectedHintRotateView;
@property (retain, nonatomic) UIView *mainLayerSelectedView;
@property (nonatomic) BOOL editAnchorSettedForRotateAndScale;
@property (nonatomic) BOOL editNeedResetPanOffset;
@property (nonatomic) struct CGPoint { double x; double y; } panRotateLastPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panScaleLastPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panRectCenterView;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) BOOL isMainLayerStickerView;

- (void)doDeselect;
- (void)handlePanGesture:(id)a0 withNewCenter:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)supportGesture:(id)a0;
- (void)doSelect;
- (BOOL)isCoverToolsExperienceOpt1;
- (void)makeSureCoverImageViewInSight;
- (void)showMainLayerSelectedView;
- (void)updateSelectedHintViewFrame;
- (id)videoCoverConfig;
- (void)hiddenMainLayerSelectedView;
- (BOOL)inRotationPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorForRotateAndScaleWithPanGesture:(id)a0;
- (double)rotateForPanPosition:(struct CGPoint { double x0; double x1; })a0;
- (double)scaleForPanPostion:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)anchorSettedForRotateAndScale;
- (void)setAnchorSettedForRotateAndScale:(BOOL)a0;
- (void)setNeedResetPanOffset:(BOOL)a0;
- (void)hintDeleteAction;
- (BOOL)needResetPanOffset;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)handlePinchGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)handleRotationGesture:(id)a0;
- (double)handleScale:(double)a0;

@end
