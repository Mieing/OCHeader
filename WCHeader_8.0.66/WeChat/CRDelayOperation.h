@class CRDelay;

@interface CRDelayOperation : NSBlockOperation

@property (retain, nonatomic) CRDelay *delay;
@property (readonly, nonatomic) double seconds;

+ (id)operationWithDelay:(id)a0;
+ (id)operationWithDelayInSeconds:(double)a0;

- (id)initWithDelay:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
