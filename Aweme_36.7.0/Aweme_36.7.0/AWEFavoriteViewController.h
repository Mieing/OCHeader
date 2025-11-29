@class UIImageView, NSString;

@interface AWEFavoriteViewController : AWEUserWorkViewController <AWETabListItemViewControllerProtocol, AWEProfileTabCustomProtocol>

@property (nonatomic) double lastContentWidth;
@property (nonatomic) BOOL isViewControllerShown;
@property (retain, nonatomic) UIImageView *columnStyleButton;
@property (copy, nonatomic) id /* block */ contentOffsetDidChangeBlock;
@property (copy, nonatomic) id /* block */ zoomTransitionBackToOutsideBlock;
@property (nonatomic) BOOL enableSwitchStyle;
@property (nonatomic) BOOL showSwitchBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadRightFixedArea;

+ (id)userWorkViewControllerConfigWithProfileContext:(id)a0;

- (id)tabContentScrollView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)rightFixedViewsArray;
- (void)handleAppWillResignActive:(id)a0;
- (id)requestCommonParams;
- (void)updateLayoutStyle:(long long)a0;
- (id)initWithProfileContext:(id)a0;
- (void)adjustCellPositionWithOffset:(double)a0;
- (id)getFirstFullVisibleCellIndexPath;
- (struct CGSize { double x0; double x1; })iconSizeWithNormalValue:(struct CGSize { double x0; double x1; })a0 middleValue:(struct CGSize { double x0; double x1; })a1 largeValue:(struct CGSize { double x0; double x1; })a2;
- (double)buttonHeightWithNormalValue:(double)a0 middleValue:(double)a1 largeValue:(double)a2;
- (void)didClickColumnStyleButton;
- (void)buildColumnStyleButton;
- (void).cxx_destruct;
- (id)requestURL;
- (long long)tableType;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)tableName;
- (void)viewWillDisappear:(BOOL)a0;
- (id)requestMethod;

@end
