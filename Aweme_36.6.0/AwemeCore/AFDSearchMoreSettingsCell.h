@class UIImageView, UILabel, UIView;
@protocol AWESettingSwitchProtocol;

@interface AFDSearchMoreSettingsCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *switcher;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long colorMode;
@property (nonatomic) BOOL enableIcon;
@property (nonatomic) BOOL enableRightTitle;
@property (nonatomic) BOOL enableSwitcher;
@property (nonatomic) BOOL isNegative;
@property (nonatomic) BOOL isSplitLine;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)toggleSwitched:(id)a0;
- (void)updateToggleState:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableSwitcher:(BOOL)a2 isNegative:(BOOL)a3 colorMode:(long long)a4;
- (void)configCellWithTitle:(id)a0 iconImage:(id)a1 switcher:(BOOL)a2 rightIconImage:(id)a3;
- (void)tapCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableSwitcher:(BOOL)a2 isNegative:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableSwitcher:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableRightTitle:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableSwitcher:(BOOL)a2 colorMode:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableIcon:(BOOL)a1 enableSwitcher:(BOOL)a2 colorMode:(long long)a3 isNegative:(BOOL)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isSplitLine:(BOOL)a1;
- (void)configCellWith:(id)a0 icon:(id)a1 switcher:(BOOL)a2 rightIcon:(id)a3;
- (void)configCellWithTitle:(id)a0 iconImage:(id)a1 rightTitle:(id)a2 rightIconImage:(id)a3;
- (void)disableLineView:(BOOL)a0;
- (void)updateRightIconImage:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)accessibilityValue;
- (BOOL)accessibilityActivate;
- (void)setupUI;

@end
