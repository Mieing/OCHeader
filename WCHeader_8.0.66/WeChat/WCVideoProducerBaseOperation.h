@interface WCVideoProducerBaseOperation : NSObject <NSCopying>

@property (nonatomic) double initTime;
@property (nonatomic) double terminateTime;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)onOperationInit;
- (void)onOperationTerminate;
- (void)operationDidStart;
- (void)operationDidStop;

@end
