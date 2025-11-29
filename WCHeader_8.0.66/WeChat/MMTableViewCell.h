@class UISwitch, MMUIView, WCTableViewCellManager;

@interface MMTableViewCell : UITableViewCell {
    UISwitch *m_switchAccessoryView;
}

@property (retain, nonatomic) MMUIView *m_subContentView;
@property (weak, nonatomic) WCTableViewCellManager *cellInfo;
@property (nonatomic) double deselectDuration;
@property (nonatomic) BOOL keepTouchInView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } selectedBackgroundViewInsets;

+ (id)getCellTextHightlightedColor;
+ (id)getCellAttributeTextHightlightedColor;
+ (id)getCellAttributeDetailTextHightlightedColor;

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)setAccessoryType:(long long)a0;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setAccessoryView:(id)a0;
- (id)accessoryView;
- (void)addBackgroundView;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
