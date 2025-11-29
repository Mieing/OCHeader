@class UIColor, NSString, UILabel, UIView;

@interface AWEProfileBaseHeaderSegmentCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) NSString *redDotHiddenUpdatingFlag;
@property (nonatomic) BOOL hasRedDotWhenSwitched;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showBackground;
@property (retain, nonatomic) UIColor *labelSelectedColor;
@property (retain, nonatomic) UIColor *labelUnSelectedColor;
@property (copy, nonatomic) NSString *redDotAccessibilityText;
@property (nonatomic) BOOL isNewFullScreenStyle;
@property (readonly, nonatomic) BOOL isShowingRedDot;

+ (long long)fontSize:(BOOL)a0;
+ (double)cellWidthWithConfig:(id)a0;

- (id)profileTabLockIconImage;
- (void)refreshWithConfig:(id)a0;
- (void)refreshWithSelected:(BOOL)a0;
- (void)updateRedDotHiddenStatus:(BOOL)a0 needTimer:(BOOL)a1;
- (void)configLabelWithSelected:(BOOL)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
