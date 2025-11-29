@class UIColor, UIFont, TYTabPagerBar;

@interface TYTabPagerBarLayout : NSObject

@property (weak, nonatomic) TYTabPagerBar *pagerTabBar;
@property (nonatomic) double selectFontScale;
@property (nonatomic) unsigned long long barStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressWidth;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double progressRadius;
@property (nonatomic) double progressBorderWidth;
@property (retain, nonatomic) UIColor *progressBorderColor;
@property (nonatomic) double progressHorEdging;
@property (nonatomic) double progressVerEdging;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellSpacing;
@property (nonatomic) double cellEdging;
@property (nonatomic) BOOL adjustContentCellsCenter;
@property (retain, nonatomic) UIFont *normalTextFont;
@property (retain, nonatomic) UIFont *selectedTextFont;
@property (retain, nonatomic) UIColor *normalTextColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (nonatomic) BOOL textColorProgressEnable;
@property (nonatomic) double animateDuration;

- (id)initWithPagerTabBar:(id)a0;
- (void)transitionFromCell:(id)a0 toCell:(id)a1 animate:(BOOL)a2;
- (void)layoutIfNeed;
- (void)configurePropertys;
- (void)adjustContentCellsCenterInBar;
- (void)setUnderLineFrameWithIndex:(long long)a0 animated:(BOOL)a1;
- (void)transitionFromCell:(id)a0 toCell:(id)a1 progress:(double)a2;
- (void)setUnderLineFrameWithfromIndex:(long long)a0 toIndex:(long long)a1 progress:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)layoutSubViews;

@end
