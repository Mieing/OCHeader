@class WAJSContextPlugin_NativeViewsComponent, NSString, WASystemCoverView;

@interface WAAppTaskSystemCoverView : MMObject <WAJSContextPlugin_NativeViewsRootViewProtocol>

@property (retain, nonatomic) WAJSContextPlugin_NativeViewsComponent *component;
@property (retain, nonatomic) WASystemCoverView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertView:(id)a0 atZIndex:(long long)a1;
- (id)getRootBaseView;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)getChildViewsByClass:(Class)a0;
- (void).cxx_destruct;

@end
