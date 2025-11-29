@class NSDictionary, UIViewController;

@interface AWEDiversionMidPageTrackerSession : NSObject

@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL suspended;
@property (weak, nonatomic) UIViewController *assignedPage;
@property (copy, nonatomic) id /* block */ tracker;

- (void)trackWithType:(id)a0 endTime:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)suspend;
- (id)initWithParams:(id)a0;
- (void)resume;

@end
