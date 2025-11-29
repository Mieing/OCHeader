@class DUXBadge, MASConstraint, NSString, DUXBaseImageView, UIView, DUXBaseLabel;
@protocol AWELeftSideBarItemContext, AWEHPSideBarStencilViewDataModelProtocol;

@interface AWEHPProfileSideBarVerticalListView : UIView <AWEHPSideBarStencilViewProtocol, AWEHPProfileSideBarVerticalListViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) id<AWEHPSideBarStencilViewDataModelProtocol> dataModel;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) UIView *descriptionBackgroundView;
@property (retain, nonatomic) DUXBaseLabel *descriptionLabel;
@property (retain, nonatomic) DUXBadge *dotView;
@property (retain, nonatomic) MASConstraint *descriptionLeftConstraint;
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
- (BOOL)updateSideBarSubTitle:(id)a0;
- (BOOL)sideBarSubTitleIsShow;
- (id)sideBarSubTitle;
- (BOOL)updateSideBarHighlightedDescription:(id)a0;
- (BOOL)sideBarHighlightedDescriptionIsShow;
- (id)sideBarHighlightedDescription;
- (void)p_reloadStencilViewUI;
- (void)p_setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)p_updateDescriptionConstraint;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
