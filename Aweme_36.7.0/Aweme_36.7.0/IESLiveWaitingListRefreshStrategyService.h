@class NSArray, IESLiveGCDTimer;

@interface IESLiveWaitingListRefreshStrategyService : NSObject

@property (retain, nonatomic) NSArray *waitingList;
@property (retain, nonatomic) NSArray *waitingListByStrategy;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)updateWaitingList:(id)a0;
- (void)freeTimerIfNeed;
- (long long)currentRefreshStrategy;
- (void)creatTimerIfNeed;
- (void).cxx_destruct;
- (void)dealloc;

@end
