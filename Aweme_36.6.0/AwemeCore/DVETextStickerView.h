@class UITextView, DVETextStickerTextView, DVETransformEditItem, DVEStoryTextImageModel, NSString, DVEStoryFontManager;

@interface DVETextStickerView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>

@property (nonatomic) BOOL enableEdit;
@property (nonatomic) BOOL fromClickEdit;
@property (retain, nonatomic) DVETextStickerTextView *textView;
@property (nonatomic) double defaultFontSize;
@property (retain, nonatomic) DVEStoryTextImageModel *textModel;
@property (retain, nonatomic) DVETransformEditItem *editItem;
@property (retain, nonatomic) UITextView *toEditTextView;
@property (copy, nonatomic) id /* block */ didPanStickerBlock;
@property (copy, nonatomic) id /* block */ didTapStickerBlock;
@property (copy, nonatomic) id /* block */ didZoomStickerBlock;
@property (nonatomic) struct CGPoint { double x; double y; } editCenterOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editingConstraintFrame;
@property (nonatomic) BOOL isContainFontLibrary;
@property (retain, nonatomic) DVEStoryFontManager *fontManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDisplay;
- (struct CGSize { double x0; double x1; })textContentSize;
- (id)initWithTextInfo:(id)a0 fontManager:(id)a1 isContainFontLibrary:(BOOL)a2;
- (void)updateFontScale:(double)a0;
- (void)scaleIfNeeded;
- (double)adjustedFontSize:(double)a0 scale:(double)a1;
- (void)resetTextViewAlignment;
- (void)restoreToSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)applyScale:(double)a0 toLayer:(id)a1;
- (void)transportToEditWithSuperView:(id)a0 animation:(id /* block */)a1 animationDuration:(double)a2 completion:(id /* block */)a3;
- (void)updateTextViewContent;
- (void)updateForZoomScale:(double)a0;
- (void)p_updateViewLayerInParentView;
- (void)applyScale:(double)a0 toView:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)handlePinchGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)updateFrame;
- (void)handleTapGesture:(id)a0;
- (void)handleRotationGesture:(id)a0;

@end
