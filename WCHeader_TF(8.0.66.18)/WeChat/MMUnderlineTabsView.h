@class UIColor, NSArray, UIView, NSMutableArray;

@interface MMUnderlineTabsView : UIControl

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *underlineView;
@property (retain, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) NSMutableArray *itemInfoList;
@property (retain, nonatomic) UIColor *underlineDefaultColor;
@property (readonly, nonatomic) unsigned long long numberOfTabItems;
@property (readonly, nonatomic) double preferWidth;
@property (nonatomic) double underlineOffset;
@property (nonatomic) double tabSpacing;
@property (nonatomic) BOOL disableBottomLine;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (retain, nonatomic) UIColor *underlineColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tabItemAtIndex:(unsigned long long)a0;
- (void)updateWithTabItems:(id)a0;
- (void)layoutTabViewWithTabInfo:(id)a0;
- (void)setContentViewBackgroundColor:(id)a0;
- (void)layoutUnderlineViewWithTabInfo:(id)a0;
- (void)layoutSubviews;
- (void)setSelectedTabIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
