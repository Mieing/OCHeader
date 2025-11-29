@class NSString, DUXBaseImageView, DUXBadge, DUXBaseLabel;
@protocol AWELeftSideBarItemContext, AWEHPSideBarStencilViewDataModelProtocol;

@interface AWEHPProfileSideBarGridListView : UIView <AWEHPSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) id<AWEHPSideBarStencilViewDataModelProtocol> dataModel;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBadge *dotView;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBadge;
- (void)showBadgeWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 withDataModel:(id)a1;
- (double)sideBarStencilViewHeight;
- (void)sideBarThemeDidChange:(long long)a0;
- (void)updateDataModel:(id)a0;
- (long long)sideBarRedDotStyle;
- (void)p_reloadStencilViewUI;
- (void)p_setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
