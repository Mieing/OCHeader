@class NSMutableArray;

@interface AWELivePreStreamLeaveManager : NSObject

@property (retain, nonatomic) NSMutableArray *leaveTime;

+ (id)sharedManager;

- (void)prestreamLeave:(id)a0;
- (id)getFeedRequestLiveExtraParams;
- (void).cxx_destruct;

@end
