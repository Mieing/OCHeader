@class EEVEEffectMessageReceiver, NLEInterface_OC;
@protocol VECameraProtocol, VECameraEffectProtocol;

@interface EECameraEffect : NSObject

@property (retain, nonatomic) EEVEEffectMessageReceiver *effectMessageReceiver;
@property (weak, nonatomic) id<VECameraProtocol, VECameraEffectProtocol> effector;
@property (retain, nonatomic) NLEInterface_OC *nleInterface;
@property (nonatomic) BOOL useNLEInterface;
@property (nonatomic) BOOL useNLEInterfaceGlobalEffect;

+ (id)defaultCameraEffect;

- (void).cxx_destruct;
- (id)init;

@end
