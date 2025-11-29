@class HTSEventContext;

@interface IESLiveGamePlatformTracker : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)trackLiveGameStart:(id)a0 extra:(id)a1;
- (void)trackLiveGameEnd:(id)a0 isAborted:(BOOL)a1 status:(id)a2 extra:(id)a3;
- (void)trackLiveGameDuration:(id)a0 loadTimeInterval:(double)a1 extra:(id)a2;
- (id)initWithTrackerContext:(id)a0;
- (id)getCommonTrackParamsWithGameItem:(id)a0;
- (void)trackLiveGameLoadDuration:(id)a0 loadTimeInterval:(double)a1 status:(BOOL)a2;
- (void).cxx_destruct;

@end
