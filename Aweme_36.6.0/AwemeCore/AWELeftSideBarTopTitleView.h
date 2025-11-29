@class NSString, UILabel, AWELeftSideBarListCellDataModel;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarTopTitleView : UIView <AWELeftSideBarTopTitleStencilViewProtocol>

@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (void)updateTitleText:(id)a0;
- (id)initWithContext:(id)a0 cellDateModel:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (id)topTitleLabel;

@end
