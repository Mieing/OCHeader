@class HTSGLFilterGroup, NSString;
@protocol IESMMEffectGroupProtocol;

@interface IESMMARCameraRendererWrapper : NSObject <IESMMARCameraRenderer>

@property (weak, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)arCamera:(id)a0 environmentCubeUpdateWithName:(id)a1 data:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)arCamera:(id)a0 ambientLightEstimatedIntensity:(double)a1 colorTemperature:(double)a2;
- (void).cxx_destruct;

@end
