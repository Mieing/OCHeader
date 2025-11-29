@interface IESIMConvFloatingBarDataComponent : AWEIMComponentBase <IESIMConvFloatingBarDataService, IESIMConvFloatingBarDataAction> {
    void /* unknown type, empty encoding */ dataManager;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (id)getTypeToFloatingBarDynamicModelsDictWithTypes:(id)a0;
- (id)getAllTypeToFloatingBarDynamicModelsDict;
- (id)getUniqueIdToUserBarDataModelsDictWithUniqueIds:(id)a0;
- (void)recheckFloatingBarDataValidWithUniqueIds:(id)a0;
- (void)localRemoveFloatingBarDataWithUniqueIds:(id)a0 type:(long long)a1;
- (void)requestRemoveFloatingBarDataWithUniqueIds:(id)a0 resultBlock:(id /* block */)a1;
- (void)recheckAllFloatingBarDataValid;
- (void)convFloatingBarDataChangedWithChangedContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
