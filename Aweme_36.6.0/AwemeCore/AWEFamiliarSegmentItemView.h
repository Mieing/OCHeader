@class UIColor, UIFont, UIImageView, AWEFamiliarSegmentItem, UILabel, UIView;

@interface AWEFamiliarSegmentItemView : UIView

@property (retain, nonatomic) UILabel *darkLabel;
@property (retain, nonatomic) UILabel *lightLabel;
@property (retain, nonatomic) UIView *yellowDotView;
@property (retain, nonatomic) UIImageView *dropDownArrow;
@property (nonatomic) BOOL needOptimizeTabTextColor;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (retain, nonatomic) UIColor *selectedLightLabelColor;
@property (retain, nonatomic) UIColor *unSelectedLightLabelColor;
@property (retain, nonatomic) AWEFamiliarSegmentItem *item;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double bottomLineWidth;

- (void)addNotifications;
- (void)updateItemYellowDotWithHidden:(BOOL)a0;
- (void)updateItemDropDownArrowWithHidden:(BOOL)a0;
- (BOOL)isShowingYellowDot;
- (void)updateSelectedProgress:(double)a0 darkTheme:(BOOL)a1 themeChanged:(BOOL)a2;
- (void)updateTitleAlpha:(double)a0 darkTheme:(BOOL)a1;
- (void)configTextColor;
- (void)addYellowDotView;
- (void)onThemeChange;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (id)initWithItem:(id)a0;
- (void)setupUI;

@end
