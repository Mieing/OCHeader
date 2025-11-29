@class MMUIButton, MMFinderLiveShopShelfCoordinator, NSString, UIScrollView, NSMutableArray, MMUILabel;

@interface MMFinderLiveShopGoodsManageSectionHeaderView : MMUIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *headerButtons;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *flashSaleButton;
@property (retain, nonatomic) MMUIButton *manageButton;
@property (retain, nonatomic) MMUIButton *addGoodsButton;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldHideFlashSale;
@property (nonatomic) BOOL shouldHideOthersExceptFlashSale;

- (void)layoutButtonsWithScroll:(long long)a0;
- (void)layoutButtonsWithEqualDistribution:(long long)a0;
- (void)layoutButtons;
- (void)generateButtonsReport;
- (id)generateButtons;
- (void)setupUI;
- (BOOL)checkDifferFromButtons:(id)a0;
- (void)updateHeaderButtonsIfNeeded;
- (void)setScrollView:(id)a0;
- (void)setHeaderButtons:(id)a0;
- (id)scrollView;
- (id)headerButtons;
- (void)update;
- (id)initWithCoordinator:(id)a0;
- (void)layoutSubviews;
- (id)addButtonWithImage:(id)a0 text:(id)a1 action:(SEL)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
