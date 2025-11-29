@class UIView, EditImageColorSquareBar, MMUIButton, NSString, UIButton, CAGradientLayer, TextStateBlurButton, UIColor;
@protocol EditImagePenToolAttrDelegate;

@interface EditImagePenToolAttrView : MMUIView <EditImageColorSquareBarDelegate> {
    UIButton *_undoBtn;
    BOOL _enable;
}

@property (retain, nonatomic) EditImageColorSquareBar *colorSquareBar;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) TextStateBlurButton *eraserButton;
@property (retain, nonatomic) CAGradientLayer *colorBarMaskLayer;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL needEraserButton;
@property (nonatomic) BOOL needSeparator;
@property (nonatomic) BOOL needsCloseButton;
@property (retain, nonatomic) UIColor *_selectedColor;
@property (weak, nonatomic) id<EditImagePenToolAttrDelegate> m_delegate;
@property (nonatomic) BOOL layoutsVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)layoutSubviews;
- (void)resetToInitalState;
- (void)setColorBarScrollEnable:(BOOL)a0;
- (id)colorBarPanGesture;
- (void)resetEraserBtnSelectedStateIfNeed;
- (void)onClickCloseButton:(id)a0;
- (void)onUndoEditImage;
- (void)onClickEraserBtn:(id)a0;
- (void)_handleClickEraserBtn:(id)a0;
- (void)setUndoEnable:(BOOL)a0;
- (id)getLineColor;
- (double)getLineWidth;
- (void)setSelectedColorFromSquareBar:(id)a0;
- (void).cxx_destruct;

@end
