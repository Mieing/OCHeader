@class NSString, NSMutableArray, NSArray;

@interface WCNewClickStatItem : MMObject

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned int errType;
@property (nonatomic) unsigned int enterTime;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int quitTime;
@property (nonatomic) int interval;
@property (nonatomic) unsigned int lastQuitTime;
@property (nonatomic) int backGroundInterval;
@property (nonatomic) int lastInterval;
@property (nonatomic) unsigned int seq;
@property (nonatomic) int sumInterval;
@property (nonatomic) unsigned int outOfOrderCount;
@property (nonatomic) unsigned int pageCount;
@property (retain, nonatomic) NSString *pageFlow;
@property (retain, nonatomic) NSMutableArray *pageList;
@property (retain, nonatomic) NSArray *pageFormatList;
@property (nonatomic) unsigned int realSwitchCount;
@property (nonatomic) int realInterval;
@property (nonatomic) int realBackGroundInterval;
@property (nonatomic) unsigned int lastSwitchBackTime;
@property (nonatomic) unsigned int lastSwitchForeTime;
@property (nonatomic) unsigned int realLastQuitTS;
@property (nonatomic) unsigned int realFirstEnterTS;

- (void)calAndFixData;
- (id)toString;
- (id)description;
- (void)calData;
- (int)calSumInterval;
- (id)formatOriginalPageFlow;
- (id)formatPageList;
- (void)checkData;
- (void)checkIsOK;
- (void)checkOutOfOrder;
- (void)checkMisMatchUI;
- (void)fixPageFlow;
- (void).cxx_destruct;

@end
