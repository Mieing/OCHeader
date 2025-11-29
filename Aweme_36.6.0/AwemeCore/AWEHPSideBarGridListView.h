@class DUXBadge, NSString, UILabel, DUXBaseImageView, DUXTextTag;
@protocol AWELeftSideBarItemContext, AWEHPSideBarStencilViewDataModelProtocol;

@interface AWEHPSideBarGridListView : UIView <AWEHPSideBarStencilViewProtocol, AWESideBarPopViewTargetPointProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) id<AWEHPSideBarStencilViewDataModelProtocol> cellDataModel;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXTextTag *subtitleLabel;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_createTitleLabel;
+ (id)p_createSubtitleLabel;

- (void)hideBadge;
- (void)showBadgeWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 withDataModel:(id)a1;
- (double)sideBarStencilViewHeight;
- (void)sideBarThemeDidChange:(long long)a0;
- (void)updateDataModel:(id)a0;
- (long long)sideBarRedDotStyle;
- (void)stencilViewUpdateSubtitle:(id)a0;
- (BOOL)isStencilViewDisplayingSubtitle;
- (id)stencilViewDisplayingSubtitle;
- (void)p_updateAccessibilityLabel;
- (void)p_loadTitleLabel;
- (void)p_loadSubtitleLabel;
- (void)p_loadDotBadge;
- (void)p_loadNumberBadge;
- (struct CGPoint { double x0; double x1; })popViewTargetPoint;
- (void)p_setupThemeStyle;
- (void)p_updateIconImage;
- (void)p_refreshView;
- (void)p_showDotBadge;
- (void)p_showNumberBadgeWithCount:(unsigned long long)a0;
- (void)p_hideDotBadge;
- (void)p_hideNumberBadge;
- (void)p_loadIconView;
- (void)p_updateTitleLabel;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
