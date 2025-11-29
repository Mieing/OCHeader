@class NSString, AWELeftSideBarCustomModuleHeaderView, AWELeftSideBarCustomModuleContainerViewConfig, AWELeftSideBarCustomModuleItemDataModel, UIView;
@protocol AWELeftSideBarItemContext, AWELeftSideBarCustomModuleDetailViewProtocol;

@interface AWELeftSideBarCustomModuleContainerView : UIView <AWELeftSideBarStencilCustomModuleViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarCustomModuleItemDataModel *model;
@property (retain, nonatomic) AWELeftSideBarCustomModuleContainerViewConfig *config;
@property (retain, nonatomic) AWELeftSideBarCustomModuleHeaderView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<AWELeftSideBarCustomModuleDetailViewProtocol> *detailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0 withMaxCount:(unsigned long long)a1;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (id)initWithContext:(id)a0 withDataModel:(id)a1 withDetailView:(id)a2;
- (id)contentDetailView;
- (void)updateListCellContext:(id)a0 withDataModel:(id)a1;
- (void)showContainerReloadAnimation;
- (void)setModuleHeaderViewClickBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 withDataModel:(id)a1 withDetailView:(id)a2 withConfig:(id)a3;
- (void)newAWELeftSideBarCustomModuleContainerViewSetCorner;
- (void)oldAWELeftSideBarCustomModuleContainerViewSetCorner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
