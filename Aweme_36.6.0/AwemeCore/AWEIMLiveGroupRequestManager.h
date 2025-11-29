@class NSTimer, NSMutableSet;

@interface AWEIMLiveGroupRequestManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableSet *waitForRequestSet;
@property (retain, nonatomic) NSMutableSet *inProcessRequestSet;
@property (copy, nonatomic) id /* block */ updateLiveGroupInfoBlock;
@property (nonatomic) BOOL avatarNeeded;

- (void)addToAggregatedRequest:(id)a0;
- (void)p_fetchNumberOfPeople;
- (void)transferWaitToInProcess;
- (void).cxx_destruct;
- (void)changeCurrentPage:(id)a0;

@end
