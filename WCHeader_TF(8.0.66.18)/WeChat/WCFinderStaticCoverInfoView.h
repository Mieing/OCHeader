@class UIColor, NSArray, UIView, NSMutableArray;

@interface WCFinderStaticCoverInfoView : UIView

@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSMutableArray *separateViews;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (nonatomic) BOOL showSeparate;
@property (retain, nonatomic) UIColor *blurColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *seperateColor;
@property (nonatomic) double seperatorPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSArray *rightItems;
@property (retain, nonatomic) NSArray *leftItems;
@property (nonatomic) BOOL forbidCorner;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)allItems;
- (void)setLeftItems:(id)a0 rightItems:(id)a1;
- (id)checkItems:(id)a0;
- (void)layoutSubviews;
- (void)doLayout;
- (BOOL)needRoundCorner;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createAccessibilityLabelForItems;
- (void).cxx_destruct;

@end
