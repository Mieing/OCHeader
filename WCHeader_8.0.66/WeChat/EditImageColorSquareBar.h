@class NSArray, UIScrollView;
@protocol EditImageColorSquareBarDelegate;

@interface EditImageColorSquareBar : MMUIView

@property (retain, nonatomic) NSArray *colorArr;
@property (nonatomic) long long colorIndex;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<EditImageColorSquareBarDelegate> m_delegate;
@property (nonatomic) BOOL layoutsVertically;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withDelegate:(id)a1 withDefaultColorIndex:(long long)a2;
- (void)initView;
- (void)reloadView;
- (id)colorAtIndex:(unsigned long long)a0;
- (id)colorDescAtIndex:(unsigned long long)a0;
- (void)setUnSelectedColor;
- (void)setColorBarScrollEnable:(BOOL)a0;
- (id)colorBarPanGesture;
- (void)onClickColorButton:(id)a0;
- (void)setColorSquare:(id)a0;
- (void)setColorSqaureWithIndex:(long long)a0;
- (void)setSelectColor:(long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
