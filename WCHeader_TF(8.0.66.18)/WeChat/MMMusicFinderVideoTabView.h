@class NSMutableArray;
@protocol MMMusicFinderVideoTabViewDelegate;

@interface MMMusicFinderVideoTabView : UIView

@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSMutableArray *tabTitles;
@property (nonatomic) unsigned long long currentIndex;
@property (weak, nonatomic) id<MMMusicFinderVideoTabViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateTabButtonState:(long long)a0;
- (void)updateButtonSelectedState:(unsigned long long)a0;
- (void)setButtonSelectedState:(unsigned long long)a0;
- (void)revertButtonSelectedState:(unsigned long long)a0;
- (void)tabButtonClicked:(id)a0;
- (void)tabButtonSelected:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
