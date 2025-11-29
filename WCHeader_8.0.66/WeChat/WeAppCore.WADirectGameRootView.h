@interface WeAppCore.WADirectGameRootView : UIView <WAJSContextPlugin_NativeViewsRootViewProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_component;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (void).cxx_destruct;

@end
