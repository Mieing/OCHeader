@interface FlowKitBizUI.MessageMenuPopView : UIView {
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ menuId;
    void /* unknown type, empty encoding */ isFromDeepThinking;
    void /* unknown type, empty encoding */ hasExpandMenu;
    void /* unknown type, empty encoding */ startExpandFrame;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandTableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandShadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shadeView;
}

- (void)updateDarkModeTheme;
- (void)willTransition;
- (void)viewClicked;
- (void)viewPaned;
- (void)shadeViewClicked;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
