@interface FSPagerView.FSPageControl : UIControl {
    void /* unknown type, empty encoding */ strokeColors;
    void /* unknown type, empty encoding */ fillColors;
    void /* unknown type, empty encoding */ paths;
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ alphas;
    void /* unknown type, empty encoding */ transforms;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ needsUpdateIndicators;
    void /* unknown type, empty encoding */ needsCreateIndicators;
    void /* unknown type, empty encoding */ indicatorLayers;
}

@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) long long contentHorizontalAlignment;
@property (nonatomic) BOOL hidesForSinglePage;

- (void)setStrokeColor:(id)a0 forState:(unsigned long long)a1;
- (void)setFillColor:(id)a0 forState:(unsigned long long)a1;
- (void)setPath:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0 forState:(unsigned long long)a1;

@end
