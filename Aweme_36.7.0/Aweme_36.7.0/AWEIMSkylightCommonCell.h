@class UILongPressGestureRecognizer, NSMutableDictionary, AWEIMSkylightCellComponentContext;

@interface AWEIMSkylightCommonCell : UICollectionViewCell

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) NSMutableDictionary *componentsViewMap;
@property (weak, nonatomic) AWEIMSkylightCellComponentContext *currentContext;

- (void)awe_themeReload;
- (void)renderWithViewModel:(id)a0;
- (void)updateVoiceOverAccessibility:(id)a0;
- (void)setupBaseInit;
- (void)longPressGesHandler:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
