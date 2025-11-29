@interface BDXLynxTextField : UITextField

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) BOOL waitingDictationRecognition;
@property (nonatomic) BOOL pasting;

+ (void)lynxLazyLoad;
+ (void)swizzleInstanceMethod:(SEL)a0 with:(SEL)a1;

- (void)scrollTextFieldToVisibleIfNecessary;
- (void)BDXLynxInput_scrollTextFieldToVisibleIfNecessary;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paste:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (long long)editingInteractionConfiguration;

@end
