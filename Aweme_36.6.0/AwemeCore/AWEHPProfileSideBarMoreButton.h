@class AWEHPSideBarMoreButtonDataModel, NSString, DUXBadge, AWEHPProfileSideBarMoreBaseButton;
@protocol AWELeftSideBarItemContext;

@interface AWEHPProfileSideBarMoreButton : UIView <AWEHPSideBarStencilViewProtocol, AWEHPProfileSideBarMoreButtonProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWEHPSideBarMoreButtonDataModel *dataModel;
@property (retain, nonatomic) AWEHPProfileSideBarMoreBaseButton *button;
@property (retain, nonatomic) DUXBadge *dotView;
@property (nonatomic) long long themeStyle;
@property (nonatomic) long long state;
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
- (void)p_resetDotViewFrame;
- (void)p_resetDotViewHidden;
- (void)updateMoreButtonState:(long long)a0;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
