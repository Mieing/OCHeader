@protocol DVEComplementaryFrameContextProtocol;

@interface DVEComplementaryFrameOperation : NSOperation

@property (copy, nonatomic) id /* block */ startBlock;
@property (nonatomic) int depth;
@property (nonatomic) double frameTime;
@property (nonatomic) double expectedStartTime;
@property (retain, nonatomic) DVEComplementaryFrameOperation *next;
@property (weak, nonatomic) id<DVEComplementaryFrameContextProtocol> frameContext;

+ (id)operationWithBlock:(id /* block */)a0;

- (void)startNext;
- (BOOL)needScheduleNextOperaitonWithInterval;
- (void).cxx_destruct;
- (void)start;

@end
