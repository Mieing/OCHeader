@class NSString, NSTimer;
@protocol AWESwitchNetLongBlockProtocol;

@interface AWESwitchNetBlockMonitor : NSObject

@property (retain, nonatomic) NSString *lastItemID;
@property (nonatomic) double totalBlockDuration;
@property (nonatomic) double startBlockTime;
@property (nonatomic) long long maxBlockCount;
@property (nonatomic) long long blockCount;
@property (retain, nonatomic) NSTimer *caculateLeftTimer;
@property (weak, nonatomic) id<AWESwitchNetLongBlockProtocol> delegate;

- (void)invaildTimer;
- (void)startTimerWith:(double)a0;
- (void)onBlocked;
- (void)onBlock:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground;
- (void)resetBlock;

@end
