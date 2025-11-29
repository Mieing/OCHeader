@protocol ITPReportParams;

@interface TPReportStepInner : NSObject

@property (nonatomic) unsigned long long step;
@property (retain, nonatomic) id<ITPReportParams> stepParam;

- (void).cxx_destruct;

@end
