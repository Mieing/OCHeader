@class NSMutableArray, NSDate;

@interface BDPAppPreconnetTask : NSObject {
    long long _interval;
}

@property (retain, nonatomic) NSMutableArray *sortedHosts;
@property (retain, nonatomic) NSDate *lastRunDate;
@property (readonly, nonatomic) BOOL shouldRunAgain;
@property (nonatomic) BOOL preconnectFinished;

- (void).cxx_destruct;
- (id)init;

@end
