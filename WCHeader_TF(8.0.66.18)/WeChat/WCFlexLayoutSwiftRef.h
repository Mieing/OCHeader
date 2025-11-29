@interface WCFlexLayoutSwiftRef : NSObject

@property (nonatomic) void *flex;

- (id)initWithView:(id)a0;
- (BOOL)applyLayout;
- (BOOL)ocApplyLayoutWithSize:(id)a0 andH:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(id)a0;
- (struct CGSize { double x0; double x1; })ocSizeThatFits:(id)a0 andH:(id)a1;
- (id)addItem:(id)a0;
- (id)define:(id /* block */)a0;
- (id)tag:(int)a0;
- (id)itemWithTag:(int)a0;
- (id)layoutOrder:(int)a0;
- (id)horizontalDirection;
- (id)verticalDirection;
- (id)justifyContent:(unsigned long long)a0;
- (id)alignItems:(unsigned long long)a0;
- (id)alignSelf:(unsigned long long)a0;
- (id)absolute;
- (id)grow:(double)a0;
- (id)wrap:(unsigned long long)a0;
- (id)shrink:(double)a0;
- (id)ocTop:(id)a0;
- (id)ocLeft:(id)a0;
- (id)ocBottom:(id)a0;
- (id)ocRight:(id)a0;
- (id)ocMarginTop:(id)a0;
- (id)ocMarginLeft:(id)a0;
- (id)ocMarginBottom:(id)a0;
- (id)ocMarginRight:(id)a0;
- (id)ocMarginHorizontal:(id)a0;
- (id)ocMarginVertical:(id)a0;
- (id)ocMargin:(id)a0;
- (id)ocMarginInsetsWithTop:(id)a0 left:(id)a1 bottom:(id)a2 right:(id)a3;
- (id)ocPaddingTop:(id)a0;
- (id)ocPaddingLeft:(id)a0;
- (id)ocPaddingBottom:(id)a0;
- (id)ocPaddingRight:(id)a0;
- (id)ocPaddingHorizontal:(id)a0;
- (id)ocPaddingVertical:(id)a0;
- (id)ocPadding:(id)a0;
- (id)ocPaddingInsetsWithTop:(id)a0 left:(id)a1 bottom:(id)a2 right:(id)a3;
- (id)ocWidth:(id)a0;
- (id)ocMinWidth:(id)a0;
- (id)ocMaxWidth:(id)a0;
- (id)ocHeight:(id)a0;
- (id)ocMinHeight:(id)a0;
- (id)ocMaxHeight:(id)a0;
- (id)ocSize:(id)a0;
- (id)ocSizeWithWidth:(id)a0 height:(id)a1;
- (id)aspectRatio:(double)a0;
- (int)unitFromSwiftUnit:(long long)a0;
- (struct WCValue { int x0; double x1; })valueFromSwiftValue:(id)a0;
- (struct WCSize { struct WCValue { int x0; double x1; } x0; struct WCValue { int x0; double x1; } x1; })sizeFromSwiftSize:(id)a0;

@end
