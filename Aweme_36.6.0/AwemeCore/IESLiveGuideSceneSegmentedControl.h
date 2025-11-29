@class UIFont, NSArray, UIColor, UIView;

@interface IESLiveGuideSceneSegmentedControl : UIControl

@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long initialIndex;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) UIView *underlineView;
@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (copy, nonatomic) id /* block */ itemSelectedHandler;

- (void)updateSelectedIndex:(long long)a0;
- (id)initWithTitles:(id)a0 initialIndex:(unsigned long long)a1;
- (id)createItemLabelWithSelected:(BOOL)a0;
- (void)addAcessibilityForLabel:(id)a0 isSelected:(BOOL)a1;
- (long long)findLabelIndexAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setupViews;

@end
