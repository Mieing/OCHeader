@class UIColor, WCFinderTabFilterView, CAGradientLayer, NSString, UIView, NSMutableArray, UIScrollView;
@protocol WCFinderTabViewProtocol, WCFinderTabPageViewBasicViewDelegate;

@interface WCFinderTabPageHeaderView : UIView <WCFinderTabViewDelegate, WCFinderTabFilterViewDelegate, UIScrollViewDelegate, WCFinderTabPageViewBasicProtocol>

@property (nonatomic) long long alignment;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double topMargin;
@property (copy, nonatomic) NSMutableArray *tabViewArray;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView<WCFinderTabViewProtocol> *currentSelectTabView;
@property (weak, nonatomic) UIView *tabBGView;
@property (nonatomic) double tabMargin;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineMargin;
@property (nonatomic) double bottomMargin;
@property (retain, nonatomic) UIScrollView *tabScrollView;
@property (retain, nonatomic) WCFinderTabFilterView *filterView;
@property (nonatomic) unsigned long long selectFilterIndex;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) BOOL fixWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderTabPageViewBasicViewDelegate> delegate;

- (id)initWithTabNameArray:(id)a0;
- (id)initWithTabViewArray:(id)a0;
- (id)initWithTabViewArray:(id)a0 alignment:(long long)a1;
- (id)genDefaultTabViewArrayWithTabNameArray:(id)a0;
- (void)addTabWithName:(id)a0;
- (void)addTabWithTabView:(id)a0;
- (BOOL)removeTabAtIndex:(unsigned long long)a0;
- (void)setTabName:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFilterNameArray:(id)a0;
- (double)tabScrollViewMaxWidth;
- (double)viewMaxWidth;
- (BOOL)hasFilter;
- (void)adjustFilterView;
- (void)adjustTabView;
- (void)initGradientMaskLayer;
- (void)updateGradientMaskLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)adjustFrame;
- (void)adjustLineViewWithTabView:(id)a0;
- (void)adjustContentOffsetWithTabView:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)selectTabView:(id)a0 isTriggerByUer:(BOOL)a1;
- (void)setSelectIndex:(unsigned long long)a0;
- (unsigned long long)currentSelectIndex;
- (void)updateButtonColor;
- (void)adjustTabViewFrame;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderTabFilterView:(id)a0 didSelectIndex:(unsigned long long)a1;
- (void)finderTabPageTabView:(id)a0 changeToWidth:(double)a1;
- (void).cxx_destruct;

@end
