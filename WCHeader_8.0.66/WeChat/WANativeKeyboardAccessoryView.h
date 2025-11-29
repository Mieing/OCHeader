@class NSString, WAJSContextPlugin_NativeViewsComponent, UIToolbar;

@interface WANativeKeyboardAccessoryView : UIView <WAJSContextPlugin_NativeViewsRootViewProtocol> {
    WAJSContextPlugin_NativeViewsComponent *_component;
    UIToolbar *_toolbar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)changetoHeight:(double)a0;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)component;
- (void)setToolBar:(id)a0;
- (void)removeToolBarFromView;
- (void)addToolbarToView:(id)a0;
- (void).cxx_destruct;

@end
