@class NSString, NSMutableDictionary;

@interface IESLiveBackendRequestTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSString *roomId;

- (void)traceBusinessDuration:(id)a0;
- (void)traceBusinessWait:(id)a0;
- (void)traceConsumeDataParam:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;

@end
