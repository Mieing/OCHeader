@class WAJSContextPlugin_NativeViewsComponent, NSString;

@interface WASplashAdRootView : MMUIView <WAJSContextPlugin_NativeViewsRootViewProtocol>

@property (retain, nonatomic) WAJSContextPlugin_NativeViewsComponent *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)getChildViewsByClass:(Class)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rootViewFrame;
- (id)rootView;
- (void).cxx_destruct;

@end
