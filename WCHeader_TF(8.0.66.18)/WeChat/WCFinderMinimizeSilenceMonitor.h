@class NSString;

@interface WCFinderMinimizeSilenceMonitor : NSObject

@property (retain, nonatomic) NSString *tid;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)cancel;
- (void)invoke;
- (void).cxx_destruct;

@end
