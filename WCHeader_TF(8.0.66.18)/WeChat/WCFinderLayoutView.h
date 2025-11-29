@class UIColor, NSMutableDictionary;

@interface WCFinderLayoutView : UIView

@property (retain, nonatomic) NSMutableDictionary *arrangeViews;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } preSize;
@property (nonatomic) long long axis;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } seperatorInset;
@property (nonatomic) double spacing;
@property (retain, nonatomic) UIColor *speratorLineColor;
@property (nonatomic) BOOL addTopBottomSperator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)layoutAllViews;
- (void)addArrangedSubview:(id)a0;
- (void)addArrangedSubview:(id)a0 priority:(long long)a1;
- (id)getArrangeSubviewByPriority:(long long)a0;
- (void)removeAllArrangeSubviews;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)arrangeSubViews;
- (void).cxx_destruct;

@end
