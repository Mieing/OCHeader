@class QGPRotation;

@interface QGPSetRotationCommand : QGPCommand

@property (retain, nonatomic) QGPRotation *params;

- (void).cxx_destruct;

@end
