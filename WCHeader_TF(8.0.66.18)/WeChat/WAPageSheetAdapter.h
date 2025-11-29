@interface WAPageSheetAdapter : MMPageSheetAdapter

@property (nonatomic) struct CGSize { double width; double height; } superViewSize;

+ (id)adapterWithViewController:(id)a0 height:(double)a1;
+ (id)adatperWithView:(id)a0 height:(double)a1;

- (void)showInView:(id)a0 animated:(BOOL)a1;
- (double)pageSheetContentWidth;

@end
