@class QGPSetExposureParam;

@interface QGPSetExposureCommand : QGPCommand

@property (retain, nonatomic) QGPSetExposureParam *params;

- (void).cxx_destruct;

@end
