@class NSMutableDictionary;

@interface MMWebViewPlugin_CustomNavigationBar : MMWebViewPluginBase {
    id /* block */ _onClickRightNavItem;
}

@property (retain, nonatomic) NSMutableDictionary *dictNavBarItemStateStorage;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (id)naviationBarItemCustomStateWithContextId:(id)a0;
- (void)setNavBarColor:(id)a0;
- (void)setLeftNavBarItemTitle:(id)a0 color:(id)a1;
- (void)setRightNavBarItemTitle:(id)a0 color:(id)a1 icon:(id)a2 clickAction:(id /* block */)a3;
- (void)setRightNavBarItemHidden:(BOOL)a0;
- (void)setRightSearchItemHidden:(BOOL)a0;
- (void)setRightNavBarItemDisableMinimizeBlock:(BOOL)a0;
- (void)setTitle:(id)a0 color:(id)a1;
- (void)setTitleColorAndUpdate:(id)a0;
- (void)setPageSubTitle:(id)a0;
- (void).cxx_destruct;

@end
