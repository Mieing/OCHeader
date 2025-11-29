@class NSString;

@interface AWEPlayInteractionTrackerController : AWEPlayInteractionBaseController <AWEPlayInteractionSpecTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEAwemePlayInteractionTrackerAdapterClass;

- (id)videoPlayProgressPercentFormatedStr;
- (id)videoTotalPlayTimeMsIgnoreLoopTimes;
- (id)aAWEPlayInteractionAdapter;
- (void)setupTransmissionNodeInfo;
- (void)setupBottomBarClickTransmissionNodeInfo;
- (void)setupPostCommentTransmissionNodeInfo;
- (void)setupPreviousPageTransmissionNodeInfo;
- (id)aAWEAwemePlayInteractionTrackerAdapter;
- (id)videoTotalPlayTimeMillisecond:(BOOL)a0;
- (void)viewDidLoad;

@end
