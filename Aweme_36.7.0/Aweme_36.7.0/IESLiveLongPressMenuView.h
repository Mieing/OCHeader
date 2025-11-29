@class NSArray, UIView, IESLiveLongPressMenuItem, UIButton;

@interface IESLiveLongPressMenuView : UIControl

@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) IESLiveLongPressMenuItem *maskedMenuItem;
@property (weak, nonatomic) UIView *darkView;
@property (weak, nonatomic) UIView *menuItemsContainerView;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } markedRect;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) long long dislikeEnterFromType;

+ (id)emptyMenuView;

- (void)addDarkMaskItem:(id)a0 maskedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showWithContainerView:(id)a0;
- (id)layoutDarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)menuViewDidClicked:(id)a0;
- (void)layoutDarkmaskedMenuItem;
- (void)layoutVerticalMenus;
- (void)makeVisiableWithAnimation;
- (void)itemViewClicked:(id)a0;
- (void)maskedMenuItemtTapped:(id)a0;
- (void)addMenuItem:(id)a0;
- (unsigned long long)menuItemsCount;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
