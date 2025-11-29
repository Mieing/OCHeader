@class QGPSetAmbientLightParam;

@interface QGPSetAmbientLightCommand : QGPCommand

@property (retain, nonatomic) QGPSetAmbientLightParam *params;

- (void).cxx_destruct;

@end
