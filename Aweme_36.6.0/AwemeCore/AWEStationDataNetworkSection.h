@class NSString, NSTimer, AWEStationVideoDetailListDataManager, NSMutableArray;

@interface AWEStationDataNetworkSection : NSObject

@property (retain, nonatomic) NSMutableArray *networkTasks;
@property (retain, nonatomic) AWEStationVideoDetailListDataManager *dataController;
@property (retain, nonatomic) NSTimer *resultCallBackTimer;
@property (retain, nonatomic) NSTimer *releaseTimer;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (nonatomic) long long expectedMinCursor;
@property (copy, nonatomic) NSString *hashTagName;

- (void)startResultTimerWithResultCallback:(id /* block */)a0;
- (void)cancelResultTimer;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
