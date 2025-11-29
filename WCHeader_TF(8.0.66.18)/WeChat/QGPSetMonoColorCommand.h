@class QGPColor;

@interface QGPSetMonoColorCommand : QGPCommand

@property (retain, nonatomic) QGPColor *params;

- (void).cxx_destruct;

@end
