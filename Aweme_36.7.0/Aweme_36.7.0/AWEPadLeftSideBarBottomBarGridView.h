@class NSString, UIImageView, AWELeftSideBarListCellDataModel, UILabel;
@protocol AWELeftSideBarItemContext;

@interface AWEPadLeftSideBarBottomBarGridView : UIView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
