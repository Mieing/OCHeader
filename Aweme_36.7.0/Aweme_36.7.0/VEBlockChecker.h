@class NSRecursiveLock, NSString, IESMMObject, NSMutableArray;
@protocol IESMMTrackerHelperProtocol;

@interface VEBlockChecker : NSObject {
    id /* block */ _delaydBlockHandle;
    id<IESMMTrackerHelperProtocol> trackerHelper;
}

@property (nonatomic) double blockTime;
@property (retain, nonatomic) NSMutableArray *startTimes;
@property (retain, nonatomic) IESMMObject *blockCheckQueue;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSString *anrMsg;

- (id)initWithBlockTime:(double)a0;
- (void)pushBlockCheck:(id)a0;
- (void)doBlock;
- (void)heartbeatWithStartTag:(double)a0;
- (void)heartbeatLastWithStartTag:(double)a0;
- (void)pushBlockCheck;
- (void)popBlockCheck;
- (void).cxx_destruct;

@end
