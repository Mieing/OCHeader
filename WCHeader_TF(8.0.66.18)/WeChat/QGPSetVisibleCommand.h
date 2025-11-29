@class QGPSetVisibleParam;

@interface QGPSetVisibleCommand : QGPCommand

@property (retain, nonatomic) QGPSetVisibleParam *params;

- (void).cxx_destruct;

@end
