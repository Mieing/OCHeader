@class NSString;

@interface AWELiveDynamicServiceImpl : NSObject <IESLiveDynamicService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDynamicViewWithDsl:(id)a0 bizIdentity:(id)a1 customData:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 delegate:(id)a4 diContext:(id)a5;
- (void)reloadDynamicView:(id)a0 withDsl:(id)a1 customData:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3;
- (void)registerLocalMethod:(id)a0 toView:(id)a1;
- (void)openDynamicSchemeEvent:(id)a0 toView:(id)a1;
- (id)createDynamicViewWithSliceFile:(id)a0 dataJsonFile:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2 delegate:(id)a3 diContext:(id)a4;
- (id)init;

@end
