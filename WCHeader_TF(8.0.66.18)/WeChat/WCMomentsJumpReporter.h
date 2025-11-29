@class WCMomentsJumpData;

@interface WCMomentsJumpReporter : NSObject

@property (retain, nonatomic) WCMomentsJumpData *jumpData;

- (void)report;
- (id)getEventId:(long long)a0;
- (void).cxx_destruct;

@end
