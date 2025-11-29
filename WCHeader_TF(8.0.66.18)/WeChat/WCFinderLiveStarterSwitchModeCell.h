@class WCFinderLiveStarterLiveModeSubItem, UIImageView, MMUIView, MMBadgeView, MMUIButton, MMUILabel;

@interface WCFinderLiveStarterSwitchModeCell : UICollectionViewCell

@property (retain, nonatomic) MMUIView *animationView;
@property (retain, nonatomic) MMUIView *borderView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) MMUIButton *clickButton;
@property (retain, nonatomic) MMBadgeView *redDotView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *item;

+ (double)getItemWidth:(id)a0;
+ (id)getCurrentItemText:(id)a0;

- (void)playCellAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)updateCellWithItem:(id)a0;
- (void)resetUI;
- (void)executeAnimaintion:(BOOL)a0;
- (void)clickButtonAction;
- (id)getCellSelectColor;
- (id)getCellNormalColor;
- (void).cxx_destruct;

@end
