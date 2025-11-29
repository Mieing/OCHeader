@interface AWENearbyColdLaunchTracker : NSObject

@property (nonatomic) BOOL coldStartTrackFlag;
@property (nonatomic) long long preloadType;
@property (nonatomic) BOOL isPreloadTaskRun;
@property (nonatomic) double fstPreloadReqStartTimestamp;
@property (nonatomic) long long l3ChangeCount;
@property (nonatomic) double fstL3ChangeTime;
@property (nonatomic) BOOL hasSubmitLoc;
@property (nonatomic) double fstSubmitLocTime;
@property (nonatomic) double tstDidLoadTime;
@property (nonatomic) double tstDidAppearTime;

+ (id)sharedInstance;

- (void)trackNearbyColdStartState;
- (void)didLoadAwemePreloadType:(unsigned long long)a0;
- (void)didAppear;
- (void)didLoad;

@end
