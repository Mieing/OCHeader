@class IESECGCDTimer;

@interface IESECThrottleFirstCall : NSObject

@property (nonatomic) BOOL hasCalled;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) double timeInterval;

- (void)callMethod:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTimeInterval:(double)a0;

@end
