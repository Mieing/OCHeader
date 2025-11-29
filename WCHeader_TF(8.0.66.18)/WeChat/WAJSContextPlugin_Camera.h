@class WAPluginComponent_Camera, NSString;

@interface WAJSContextPlugin_Camera : WAJSContextPluginBase <WAPluginComponent_CameraDelegate, WAJSContextPlugin_NativeViewsRootViewProtocol> {
    BOOL _cameraOpened;
    NSString *_appId;
}

@property (retain, nonatomic) WAPluginComponent_Camera *cameraComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned int)insertCameraWithConfig:(id)a0 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cameraId:(unsigned int)a2 parentId:(unsigned int)a3 size:(struct CGSize { double x0; double x1; } *)a4;
- (void)resizeVideo:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)operateCamera:(id)a0 cameraId:(unsigned int)a1 compelete:(id /* block */)a2;
- (void)removeCamera;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (void)onCameraStateChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
