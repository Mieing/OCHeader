@class NSMutableArray, NSMutableDictionary;

@interface WCSheetView : UIScrollView

@property (retain, nonatomic) NSMutableArray *privateComponentViews;
@property (retain, nonatomic) NSMutableDictionary *viewToAttributes;
@property (nonatomic) double contentWidth;
@property (nonatomic) double minimumMainBottomSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) BOOL fixedWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appendComponentView:(id)a0;
- (void)appendComponentView:(id)a0 ofType:(unsigned long long)a1;
- (id)componentViews;
- (void)removeComponentView:(id)a0;
- (void)removeAllComponentViews;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forView:(id)a1;
- (void)setFixedWidth:(BOOL)a0 forView:(id)a1;
- (void)setUseSystemLayoutSizeFittingSize:(BOOL)a0 forView:(id)a1;
- (void)setAlignment:(unsigned long long)a0 forView:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })calViewSizeThatFits:(struct CGSize { double x0; double x1; })a0 forView:(id)a1 attributes:(id)a2;
- (void).cxx_destruct;

@end
