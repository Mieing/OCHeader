@class UIColor, NSMutableArray;

@interface WCFinderArrangeView : WCFinderObseverViewHiddenView

@property (retain, nonatomic) NSMutableArray *lineViews;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) double padding;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) double separatorPaddingStart;
@property (nonatomic) double separatorPaddingEnd;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)ignoreView:(id)a0;
- (void)onSubviewHiddenChanged:(id)a0;
- (void)layoutDelay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)doLayout;
- (void)ensureLineView:(long long)a0;
- (void)layoutSubviews;
- (void)doLayoutSubviews;
- (void).cxx_destruct;

@end
