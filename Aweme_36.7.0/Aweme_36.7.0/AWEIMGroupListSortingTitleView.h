@class AWEIMGroupListSortingMenuView, NSArray, NSString, UILabel, UIView, UIButton;
@protocol AWEIMGroupListSortingTitleViewProtocol, IESIMPopoverProtocol;

@interface AWEIMGroupListSortingTitleView : UIView <UITableViewDelegate, AWEIMGroupListSortingMenuProtocol>

@property (nonatomic) long long preferredWidth;
@property (retain, nonatomic) UIView *gesMaskView;
@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIView *roundedCornerTriangleView;
@property (retain, nonatomic) AWEIMGroupListSortingMenuView *menuView;
@property (retain, nonatomic) UIView<IESIMPopoverProtocol> *popoverMenu;
@property (retain, nonatomic) NSArray *menuItemModels;
@property (nonatomic) long long lastSelectedIndex;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) BOOL isMenuExpanding;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<AWEIMGroupListSortingTitleViewProtocol> delegate;
@property (nonatomic) unsigned long long colorTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__refreshUI;
- (void)updateMainTitle:(id)a0;
- (void)configWithMenuViewItemModels:(id)a0 currentSortedTypeIndex:(long long)a1 preferredWidth:(double)a2;
- (void)foldMenuIfNeeded;
- (void)__foldMenu;
- (void)__updateSelectionStatus;
- (void)__expandMenu;
- (void)__sortByTypeAtIndex:(long long)a0;
- (void)adjustDarkMode:(id)a0;
- (void)__clickOnTitle;
- (void)__tapOnMask;
- (void)__panOnMaskWithGes:(id)a0;
- (void)enable;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)init;
- (void)disable;

@end
