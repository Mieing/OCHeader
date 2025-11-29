@class NSString;
@protocol AWELeftSideBarItemContext, AWEHPSideBarStencilViewDataModelProtocol;

@interface AWEHPSideBarProfileListView : AWEHPSideBarListBaseView <AWEHPSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) id<AWEHPSideBarStencilViewDataModelProtocol> dataModel;
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
- (void)stencilViewUpdateSubtitle:(id)a0;
- (BOOL)isStencilViewDisplayingSubtitle;
- (id)stencilViewDisplayingSubtitle;
- (void)p_updateIconImageWithThemeStyle:(long long)a0;
- (void).cxx_destruct;

@end
