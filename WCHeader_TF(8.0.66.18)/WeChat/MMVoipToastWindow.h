@class MMStringToastView;

@interface MMVoipToastWindow : MMUIWindow

@property (retain, nonatomic) MMStringToastView *m_stringView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_fixRect;
@property (nonatomic) double m_fixOriginX;

- (void)dealloc;
- (void)changeOriginY:(double)a0;
- (void)clearCurrentString;
- (void)clearAllString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isUsingMPUI:(BOOL)a1;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1 type:(unsigned long long)a2;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1 type:(unsigned long long)a2 isDiff:(BOOL)a3;
- (void)makeKeyWindow;
- (void)statusBarDidRotate;
- (void)rotateToOrientation:(long long)a0;
- (void).cxx_destruct;

@end
