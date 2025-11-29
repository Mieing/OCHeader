@class NSString, AWELeftSideBarListCellDataModel, DUXBaseImageView;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarTopIconView : UIView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewWidth;
- (double)leftSideBarStencilViewHeight;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (id)initWithContext:(id)a0 cellDateModel:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
