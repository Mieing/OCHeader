@class NSMutableArray, NSDate;

@interface IESGurdSyncResourceThrottleInfo : NSObject

@property (retain, nonatomic) NSDate *lastFinishedDate;
@property (retain, nonatomic) NSMutableArray *completions;

- (void).cxx_destruct;
- (id)init;

@end
