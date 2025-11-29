@class NSTimer, NSString;

@interface AWEConcernFollowTabPinTopManager : NSObject <AWEConcernFollowTabPinTopProtocol>

@property (nonatomic) long long strategy;
@property (nonatomic) double stayDuration;
@property (retain, nonatomic) NSTimer *followTabPinTopTimer;
@property (nonatomic) BOOL isFollowTabPinTopTimerMeet;
@property (retain, nonatomic) NSString *previousAwemeId;

+ (id)sharedManager;

- (BOOL)followTabPinTopExpOn;
- (double)followTabStayDurationTime;
- (void)didFollowTabPinTopTimerMeet;
- (void)switchOnTimer;
- (void)switchOffTimer;
- (void)followTabAwemePlayBegin:(id)a0;
- (void)followTabGeneralAwemePlayEnd:(id)a0;
- (void)followTabAlbumAwemePlayEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pauseTimer;
- (void)resumeTimer;
- (id)componentID;

@end
