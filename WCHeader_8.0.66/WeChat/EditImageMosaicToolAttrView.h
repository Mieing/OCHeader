@class TextStateBlurButton, MMUIView, MMUIButton, WCEditImageMosaicToolViewInitParams;
@protocol EditImageMosaicToolAttrDelegate;

@interface EditImageMosaicToolAttrView : MMUIView {
    BOOL _enable;
}

@property (retain, nonatomic) WCEditImageMosaicToolViewInitParams *params;
@property (retain, nonatomic) TextStateBlurButton *eraserButton;
@property (retain, nonatomic) MMUIView *separatorView;
@property (retain, nonatomic) MMUIButton *traditionalBtn;
@property (retain, nonatomic) MMUIButton *brushBtn;
@property (retain, nonatomic) MMUIButton *undoBtn;
@property (nonatomic) unsigned long long selectState;
@property (weak, nonatomic) id<EditImageMosaicToolAttrDelegate> m_delegate;
@property (nonatomic) unsigned long long selectedNumber;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)setup;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })getBtnSize:(id)a0;
- (double)genBtnBoaderWidth:(id)a0;
- (void)onUndoEditImage;
- (void)onTraditionalBtnClicked;
- (void)onBrushBtnClicked;
- (void)resetToInitalState;
- (void)resetEraserBtnSelectedStateIfNeed;
- (void)setUndoEnable:(BOOL)a0;
- (double)getLineWidth;
- (void)onClickEraserBtn:(id)a0;
- (void)_handleClickEraserBtn:(id)a0;
- (void).cxx_destruct;

@end
