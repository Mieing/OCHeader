@class NSArray, NSMutableArray, UIView;
@protocol MMMusicPostVideoTabViewDelegate;

@interface MMMusicPostVideoTabView : UIView

@property (retain, nonatomic) UIView *tabUnderLine;
@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSArray *tabListData;
@property (nonatomic) unsigned long long currentIndex;
@property (weak, nonatomic) id<MMMusicPostVideoTabViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refreshTabLanguage;
- (BOOL)configTabList:(id)a0;
- (void)updateTabButtonsLayout;
- (double)getUILabelWidthWithTips:(id)a0;
- (void)selectTabAtIndex:(long long)a0 manualyTappedType:(unsigned long long)a1;
- (void)updateTabButtonState:(long long)a0 needAnim:(BOOL)a1;
- (void)updateButtonSelectedState:(unsigned long long)a0;
- (void)setButtonSelectedState:(unsigned long long)a0;
- (void)revertButtonSelectedState:(unsigned long long)a0;
- (void)tabButtonClicked:(id)a0;
- (void)tabButtonSelected:(id)a0 index:(long long)a1 manualyTappedType:(unsigned long long)a2;
- (unsigned long long)getCurrentButtonIndex;
- (void)widthToFit;
- (void).cxx_destruct;

@end
