@protocol FlutterViewEngineDelegate;

@interface FlutterView : UIView <FlutterViewHelper> {
    BOOL _isWideGamutEnabled;
}

@property (class, nonatomic) BOOL enableFlutterMetalLayer;

@property (weak, nonatomic) id<FlutterViewEngineDelegate> delegate;
@property (nonatomic) BOOL presentsWithTransaction;

+ (Class)layerClass;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)screen;
- (unsigned long long)pixelFormat;
- (BOOL)isWideGamutSupported;
- (id)initWithDelegate:(id)a0 opaque:(BOOL)a1 enableWideGamut:(BOOL)a2;
- (void)layoutSubviews;
- (id)snapshotFlutter;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)isAccessibilityElement;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;

@end
