@class NSString, AWELeftSideBarListCellDataModel;
@protocol AWELeftSideBarItemContext;

@interface AWEHPSideBarHomeGridView : AWEHPSideBarGridBaseView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0 withMaxCount:(unsigned long long)a1;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1 clickBlock:(id /* block */)a2;
- (void)p_updateIconImageWithThemeStyle:(long long)a0;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void).cxx_destruct;

@end
